#include "fdtd.h"

void abcInit(Grid *g) {
    return;
}

void abc(Grid *g) {
    Ez(0) = Ez(1);
    Ez(SizeX - 1) = Ez(SizeX - 2);
    Hy(SizeX - 1) = Hy(SizeX - 2);

    return;
}