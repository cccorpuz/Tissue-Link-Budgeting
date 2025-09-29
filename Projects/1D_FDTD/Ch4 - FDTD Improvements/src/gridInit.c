#include "fdtd.h"
#include "ezInc.h"

void gridInit(Grid *g, int simType) {
    if (simType == 0) {
        SizeX = 200;
        LOSS_LAYER_1 = 100; // grid point where region 1 ends
        LOSS_LAYER_2 = 110; // grid point where region 2 ends
        LOSS_LAYER_3 = 115; // grid point where region 3 ends
    } else if (simType == 1) {
        ezIncUpdate(g);
    }

    MaxTime = 450;
    Cdtds = 1.0; /* Courant number, ideal at 1 for 1D FDTD */
        
    LOSS_1 = 0.0; // loss in region 1
    LOSS_2 = 0.1829; // loss in region 2
    LOSS_3 = 0.0; // loss in region 3
        
    L0_EPSR = 1.0; // relative permittivity in region 0
    L1_EPSR = 5.1249; // relative permittivity in region 1
    L2_EPSR = 2.0; // relative permittivity in region 2
    L3_EPSR = 2.0; // relative permittivity in region 3

}

void gridPropertyInit(Grid *g, int simType) {

    ALLOC_1D(g->ez, SizeX, double);
    ALLOC_1D(g->ceze, SizeX, double);
    ALLOC_1D(g->cezh, SizeX, double);
    ALLOC_1D(g->hy, SizeX - 1, double);
    ALLOC_1D(g->chyh, SizeX - 1, double);
    ALLOC_1D(g->chye, SizeX - 1, double);

    double imp0 = sqrt(MU0 / EPS0);
    int mm;

    TotalEnergy = 0.0; // start with no energy in the system
    ThresholdEnergy = 1e-4;// stop when energy has decayed by 50 dB
    PeakEnergy = 0.0; // track the peak energy level
    PeakReached = 0; // flag to indicate if peak energy has been reached
    LastEnergy = 0.0; // track energy from last timestep

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