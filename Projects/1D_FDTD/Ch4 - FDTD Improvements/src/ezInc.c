#include "ezInc.h"

static int ezInit = 0;
static double sizeX, ll1, ll2, ll3;
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
    
    ppw = C0 / (fp * xres * sqrt(L1_EPSR));

    cdtds = Cdtds;

    if ( ppw < 10.0 ) {
        ppw = 15.0;
        xres = C0 / (fp * ppw * sqrt(L1_EPSR));
    }
    
    // SizeX = (int)(SizeX / xres);
    // LOSS_LAYER_1 = (int)(LOSS_LAYER_1 / xres);
    // LOSS_LAYER_2 = (int)(LOSS_LAYER_2 / xres);
    // LOSS_LAYER_3 = (int)(LOSS_LAYER_3 / xres);

    sizeX = SizeX; // store sizeX
    ll1 = LOSS_LAYER_1; // store loss layer 1
    ll2 = LOSS_LAYER_2; // store loss layer 2   
    ll3 = LOSS_LAYER_3; // store loss layer 3

    printf("Courant number: \t\t%.3lf\n", cdtds);
    printf("Size of X Grid: \t\t%d points\n", SizeX);
    printf("Points per wavelength: \t\t%.3lf\n", ppw);
    printf("X-Grid Resolution (dx): \t%.3e meters\n", xres);

    Dt = cdtds * xres / C0;
    printf("Time Step (dt): \t\t%.3e seconds\n", Dt); 

    timestepOut(g);
    ezInit = 1;
    return;
}

void ezIncUpdate(Grid *g) {
    SizeX = sizeX;
    LOSS_LAYER_1 = ll1;
    LOSS_LAYER_2 = ll2;
    LOSS_LAYER_3 = ll3;
    return;
}

double ezInc(double time, double location) {
    double arg;

    if (ppw <=0 && !ezInit) {
        fprintf(stderr, "ezInc: must call init before this and ppw must be > 0\n");
        exit(-1);
    }

    arg = M_PI * ( (cdtds * time - location) / ppw - 1.0 );
    arg = arg * arg;
    return (1.0 - 2.0 * arg) * exp(-arg);
}
