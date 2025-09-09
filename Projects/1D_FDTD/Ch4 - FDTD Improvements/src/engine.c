/* improved3.c: FDTD simulation where main() is primarily used to call
 * other functions that perform the necessary operations. */
 #include "fdtd.h"
 #include <string.h>
 #include <fftw3.h>
 #include <math.h>

 int main()
 {
    /* Baseline Signal Simulation */
    Grid *g;
    ALLOC_1D(g, 1, Grid); 
    gridInit(g,0);
    abcInit(g);
    tfsfInit(g);
    snapshotInit(g,0);
    
    for (Time = 0; Time < MaxTime; Time++) {
        updateH(g);
        tfsfUpdate(g); 
        abc(g);
        updateE(g);
        snapshot(g);
    }
    snapshotClose(); /* close file associated with first sim */
    free(g);

    /* Layered Simulation */
    ALLOC_1D(g, 1, Grid); 
    gridInit(g,1);
    abcInit(g);
    tfsfInit(g);
    snapshotInit(g,1);
    
    for (Time = 0; Time < MaxTime; Time++) {
        updateH(g);
        tfsfUpdate(g); 
        abc(g);
        updateE(g);
        snapshot(g);
    }
    snapshotClose(); /* close file associated with second sim */
    free(g);

    
    /* FFT-based analysis */
    printf("\nNOTE: For FFT analysis to be meaningful, snapshot parameters\n"
           "(start time, temporal stride) should be identical for both simulations.\n");

    FILE *file_inc = fopen("sim_output1.csv", "r");
    FILE *file_ref = fopen("sim_output0.csv", "r");

    if (!file_inc || !file_ref) {
        perror("Error opening snapshot files for FFT analysis");
        return -1;
    }

    int n_samples = 0;
    char line[2048];
    while (fgets(line, sizeof(line), file_inc)) {
        n_samples++;
    }
    rewind(file_inc);
    printf("Found %d samples for FFT analysis.\n", n_samples);
    n_samples = 450;

    double *ezInc = (double *)malloc(n_samples * sizeof(double));
    double *ezRef = (double *)malloc(n_samples * sizeof(double));
    if (!ezInc || !ezRef) {
        perror("Malloc failed for E-field arrays");
        return -1;
    }

    for (int i = 0; i < n_samples; i++) {
        if (fscanf(file_inc, "%lf%*[^\n]", &ezInc[i]) != 1) {
            fprintf(stderr, "Error reading incident data at sample %d\n", i);
            return -1;
        }
        if (fscanf(file_ref, "%lf%*[^\n]", &ezRef[i]) != 1) {
            fprintf(stderr, "Error reading reflected data at sample %d\n", i);
            return -1;
        }
    }
    fclose(file_inc);
    fclose(file_ref);

    fftw_complex *in_inc, *in_ref, *out_inc, *out_ref;
    fftw_plan p_inc, p_ref;

    in_inc = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * n_samples);
    in_ref = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * n_samples);
    out_inc = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * n_samples);
    out_ref = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * n_samples);

    for (int i = 0; i < n_samples; i++) {
        in_inc[i][0] = ezInc[i]; in_inc[i][1] = 0.0;
        in_ref[i][0] = ezRef[i]; in_ref[i][1] = 0.0;
    }

    p_inc = fftw_plan_dft_1d(n_samples, in_inc, out_inc, FFTW_FORWARD, FFTW_ESTIMATE);
    p_ref = fftw_plan_dft_1d(n_samples, in_ref, out_ref, FFTW_FORWARD, FFTW_ESTIMATE);

    fftw_execute(p_inc);
    fftw_execute(p_ref);

    FILE *s11_file = fopen("s11.csv", "w");
    if (!s11_file) {
        perror("Error opening s11.csv for writing");
    } else {
        fprintf(s11_file, "Frequency (Hz),S11 (dB)\n");

        int temporalStride = getTemporalStride();
        if (temporalStride <= 0) {
            fprintf(stderr, "Error: temporal stride for snapshots is not positive. Cannot calculate frequency.\n");
        } else {
            const double c0 = 299792458.0;
            const double cdtds = 1.0; // From gridInit.c, assuming dx=1
            double dt = cdtds / c0;
            double fs = 1.0 / (temporalStride * dt);
            double df = fs / n_samples;

            printf("\nFrequency-domain analysis (S11 = |Ez_ref / Ez_inc|^2):\n");
            printf("Frequency (Hz), S11 (dB)\n");
            // Start from i=1 to omit DC component (frequency = 0)
            for (int i = 1; i < n_samples / 2; i++) {
                double den = out_inc[i][0] * out_inc[i][0] + out_inc[i][1] * out_inc[i][1];
                if (den < 1e-20) continue; // Avoid division by zero or small numbers
                
                // g = out_ref / out_inc (complex division)
                double g_real = (out_ref[i][0] * out_inc[i][0] + out_ref[i][1] * out_inc[i][1]) / den;
                double g_imag = (out_ref[i][1] * out_inc[i][0] - out_ref[i][0] * out_inc[i][1]) / den;
                
                // s11 = abs(g)^2
                double s11 = g_real * g_real + g_imag * g_imag;
                double s11_db = 10.0 * log10(s11 + 1e-20); // Add epsilon to avoid log(0)
                
                double freq = i * df;
                
                printf("%g, %g\n", freq, s11_db);
                fprintf(s11_file, "%g,%g\n", freq, s11_db);
            }
        }
        fclose(s11_file);
        printf("\nS11 results saved to s11.csv\n");
    }

    fftw_destroy_plan(p_inc);
    fftw_destroy_plan(p_ref);
    fftw_free(in_inc); fftw_free(in_ref);
    fftw_free(out_inc); fftw_free(out_ref);
    free(ezInc); free(ezRef);

    return 0;
 }