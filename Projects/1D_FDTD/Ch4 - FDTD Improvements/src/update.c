#include "fdtd.h"

void updateH(Grid *g) {
    TotalEnergy = 0.0; // reset total energy before accumulation
    int mm;

    for (mm = 0; mm < SizeX - 1; mm++) {
        /* Update H field */
        Hy(mm) = Chyh(mm) * Hy(mm) + 
                 Chye(mm) * (Ez(mm + 1) - Ez(mm));

        /* Track total energy in the system */
        TotalEnergy += 0.5 * MU0 * Hy(mm) * Hy(mm);
    }

    return;
}

void updateE(Grid *g) {
    int mm;

    for (mm = 1; mm < SizeX - 1; mm++) {
        /* Update E field*/
        Ez(mm) = Ceze(mm) * Ez(mm) +
                 Cezh(mm) * (Hy(mm) - Hy(mm - 1));

        /* Track total energy in the system*/
        if (mm < LOSS_LAYER_1) {
            TotalEnergy += 0.5 * EPS0 * L0_EPSR * Ez(mm) * Ez(mm);
        } else if (mm < LOSS_LAYER_2) {
            TotalEnergy += 0.5 * EPS0 * L1_EPSR * Ez(mm) * Ez(mm);
        } else if (mm < LOSS_LAYER_3) {
            TotalEnergy += 0.5 * EPS0 * L2_EPSR * Ez(mm) * Ez(mm);
        } else {
            TotalEnergy += 0.5 * EPS0 * L3_EPSR * Ez(mm) * Ez(mm);
        }
    }

    return;
}
