#include "fdtd.h"

void gridInit(Grid *g, int simType) {
    double imp0 = sqrt(MU0 / EPS0);
    int mm;

    SizeX = 200;
    MaxTime = 450;
    Cdtds = 1.0; /* Courant number, ideal at 1 for 1D FDTD */

    TotalEnergy = 0.0; // start with no energy in the system
    ThresholdEnergy = 1e-5; // stop when energy has decayed by 60 dB
    PeakEnergy = 0.0; // track the peak energy level
    PeakReached = 0; // flag to indicate if peak energy has been reached


    ALLOC_1D(g->ez, SizeX, double);
    ALLOC_1D(g->ceze, SizeX, double);
    ALLOC_1D(g->cezh, SizeX, double);
    ALLOC_1D(g->hy, SizeX - 1, double);
    ALLOC_1D(g->chyh, SizeX - 1, double);
    ALLOC_1D(g->chye, SizeX - 1, double);

    if (!simType) {
        // Uniform grid: all coefficients set to first region
        for (mm = 0; mm < SizeX; mm++) {
            Ceze(mm) = 1.0;
            Cezh(mm) = imp0 / L0_EPSR;
        }
        for (mm = 0; mm < SizeX - 1; mm++) {
            Chyh(mm) = 1.0;
            Chye(mm) = 1.0 / imp0;
        }
    } else {
        // Multi-region grid
        for (mm = 0; mm < SizeX; mm++) {
            if (mm < LOSS_LAYER_1) {
                Ceze(mm) = 1.0;
                Cezh(mm) = imp0 / L0_EPSR;
            } else if (mm < LOSS_LAYER_2) {
                Ceze(mm) = (1.0 - LOSS_1) / (1.0 + LOSS_1);
                Cezh(mm) = imp0 / L1_EPSR / (1.0 + LOSS_1);
            } else if (mm < LOSS_LAYER_3) {
                Ceze(mm) = (1.0 - LOSS_2) / (1.0 + LOSS_2);
                Cezh(mm) = imp0 / L2_EPSR / (1.0 + LOSS_2);
            } else {
                Ceze(mm) = (1.0 - LOSS_3) / (1.0 + LOSS_3);
                Cezh(mm) = imp0 / L3_EPSR / (1.0 + LOSS_3);
            }
        }
        for (mm = 0; mm < SizeX - 1; mm++) {
            if (mm < LOSS_LAYER_1) {
                Chyh(mm) = 1.0;
                Chye(mm) = 1.0 / imp0;
            } else if (mm < LOSS_LAYER_2) {
                Chyh(mm) = (1.0 - LOSS_1) / (1.0 + LOSS_1);
                Chye(mm) = 1.0 / imp0 / (1.0 + LOSS_1);
            } else if (mm < LOSS_LAYER_3) {
                Chyh(mm) = (1.0 - LOSS_2) / (1.0 + LOSS_2);
                Chye(mm) = 1.0 / imp0 / (1.0 + LOSS_2);
            } else {
                Chyh(mm) = (1.0 - LOSS_3) / (1.0 + LOSS_3);
                Chye(mm) = 1.0 / imp0 / (1.0 + LOSS_3);
            }
        }
    }

    return;
}