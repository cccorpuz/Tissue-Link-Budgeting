/* improved3.c: FDTD simulation where main() is primarily used to call
 * other functions that perform the necessary operations. */
 #include "fdtd.h"
 #include <time.h>

 int main()
 {
    //TODO: Change so printing and timekeeping is abstracted to new .c file

    Grid *g;
    ALLOC_1D(g, 1, Grid); 
    gridInit(g,0);
    abcInit(g);
    tfsfInit(g);
    snapshotInit(g);  
    for (int simNum = 0; simNum < 2; simNum++) {
        time_t start_time = time(NULL), last_print_time = time(NULL), current_print_time = time(NULL);
        if (simNum) {
            // Reset
            ALLOC_1D(g, 1, Grid); 
            gridInit(g,1);
            abcInit(g);
            Time = 0;
        }
        do {
            // LastEnergy = TotalEnergy;
            updateH(g);
            tfsfUpdate(g); 
            abc(g); // TODO: improve from basic ABC to higher order ABC
            updateE(g);
            snapshot(g, simNum);

            // TODO: Clean up below here
            if (PeakEnergy < TotalEnergy) {
                PeakEnergy = TotalEnergy;
            } else {
                PeakReached = 1;
            }
            Time++;
            current_print_time = time(NULL);
            if (difftime(current_print_time, last_print_time) >= 4.0 || Time == 1 || TotalEnergy / PeakEnergy < ThresholdEnergy) {
                printf("[\t%.1fs\t] Timestep:\t %d\t|| Energy: ~%.2e (%.2e dB)\n", 
                    difftime(current_print_time,start_time), Time, TotalEnergy, 10*log10(TotalEnergy/PeakEnergy));
                // printf("%.e\n", LastEnergy - TotalEnergy);
                last_print_time = current_print_time;
            }
        } while ( (TotalEnergy / PeakEnergy > ThresholdEnergy /*|| abs(LastEnergy - TotalEnergy) >  1e-30*/) || !PeakReached);
        printf("Simulation %d complete. Total time: %.1fs\n", simNum, difftime(time(NULL), start_time));
        free(g);
    }
    
    return 0;
 }