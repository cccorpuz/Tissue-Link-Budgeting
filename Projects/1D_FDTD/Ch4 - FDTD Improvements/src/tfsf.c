#include <math.h>
#include "fdtd.h"
#include "ezInc.h"

static int tfsfBoundary = 0; /* location of tfsf boundary */

void tfsfInit(Grid *g) {
    // printf("Enter location of tfsf boundary: ");
    // scanf("%d", &tfsfBoundary);
    tfsfBoundary = 1; /* hardcoded for simplicity */

    ezIncInit(g);

    return;
}

void tfsfUpdate(Grid *g) {
    if (tfsfBoundary <= 0) {
        fprintf(stderr, "tfsfUpdate: init must be called first and boundary location must be positive\n");
        exit(-1);
    }

    /* correct Hy adjacent to boundary */
    Hy(tfsfBoundary) -= ezInc(Time, 0.0) * Chye(tfsfBoundary);

    /* correct Ez adjacent to boundary*/
    Ez(tfsfBoundary + 1) += ezInc(Time + 0.5, -0.5);
}