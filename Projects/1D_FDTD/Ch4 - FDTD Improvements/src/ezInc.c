#include "ezInc.h"

static double delay, width = 0, cdtds, ppw = 0;

void ezIncInit(Grid *g) {
    cdtds = Cdtds;
    printf("Enter time delay (num of timesteps to peak): ");
    scanf("%lf", &delay);
    printf("Enter width (ts between peak and 1/e): ");
    scanf("%lf", &width);

    // printf("Enter points per wavelength: ");
    // scanf(" %lf", &ppw);

    return;
}

double ezInc(double time, double location) {
    if (width <= 0) {
        fprintf(stderr, "ezInc: must call init before this and width must be > 0\n");
        exit(-1);
    }
    return exp(-pow((time - delay - location / cdtds) / width, 2));
}

// double ezInc(double time, double location) {
//     if (ppw <=0) {
//         fprintf(stderr, "ezInc: must call init before this and ppw must be > 0\n");
//         exit(-1);
//     }
//     return sin(2.0 * M_PI * (time - location / cdtds) / ppw);
// }