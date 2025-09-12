#include "fdtd.h"

void gridInit(Grid *g, int simType) {
    double imp0 = sqrt(MU0 / EPS0);
    int mm;

    SizeX = 200;
    MaxTime = 450;
    Cdtds = 1.0; /* Courant number, ideal at 1 for 1D FDTD */

    TotalEnergy = 0.0; // start with no energy in the system
    ThresholdEnergy = 1e-6; // stop when energy has decayed by 60 dB
    PeakEnergy = 0.0; // track the peak energy level
    PeakReached = 0; // flag to indicate if peak energy has been reached


    ALLOC_1D(g->ez, SizeX, double);
    ALLOC_1D(g->ceze, SizeX, double);
    ALLOC_1D(g->cezh, SizeX, double);
    ALLOC_1D(g->hy, SizeX - 1, double);
    ALLOC_1D(g->chyh, SizeX - 1, double);
    ALLOC_1D(g->chye, SizeX - 1, double);

    for (mm = 0; mm < SizeX; mm++) {
        if (mm < LOSS_LAYER || !simType) {
            Ceze(mm) = 1.0;
            Cezh(mm) = imp0 / L1_EPSR;
        } else {
            Ceze(mm) = (1.0 - LOSS) / (1.0 + LOSS);
            Cezh(mm) = imp0 / L1_EPSR / (1.0 + LOSS);
        }
    }

    for (mm = 0; mm < SizeX - 1; mm++) {
        if (mm < LOSS_LAYER || !simType) {
            Chyh(mm) = 1.0;
            Chye(mm) = 1.0 / imp0;
        } else {
            Chyh(mm) = (1.0 - LOSS) / (1.0 + LOSS);
            Chye(mm) = 1.0 / imp0 / (1.0 + LOSS);
        }
    }

    return;
}