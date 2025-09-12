#include "ezInc.h"

static double cdtds, fp = 1, xres = 0.001, ppw = 0;

void ezIncInit(Grid *g) {
    /* Reference Chapter 5.2 of Schneider "Understanding the [FDTD] Method" for Ricker Wavelet params*/
    // printf("Enter points per wavelength for Ricker source: ");
    // scanf(" %lf", &ppw);
    // printf("Enter 1D spatial resolution in meters (e.g., 0.01 for 1 cm): ");
    // scanf(" %lf", &xres);
    // fp = C0 / (ppw * xres);
    // printf("peak frequency = %lf Hz\n", fp));
    printf("Enter peak frequency (Hz): ");
    scanf("%lf", &fp);

    cdtds = Cdtds;
    printf("Courant number: \t\t%.3lf\n", cdtds);

    ppw = C0 / (fp * xres);
    printf("Points per wavelength: \t\t%.3lf\n", ppw);

    printf("X-Grid Resolution (dx): \t%.3e meters\n", xres);

    Dt = cdtds * xres / C0;
    printf("Time Step (dt): \t\t%.3e seconds\n", Dt); 

    return;
}

double ezInc(double time, double location) {
    double arg;

    if (ppw <=0) {
        fprintf(stderr, "ezInc: must call init before this and ppw must be > 0\n");
        exit(-1);
    }

    arg = M_PI * ( (cdtds * time - location) / ppw - 1.0 );
    arg = arg * arg;
    return (1.0 - 2.0 * arg) * exp(-arg);
}