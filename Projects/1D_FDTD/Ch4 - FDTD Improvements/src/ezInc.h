#ifndef _EZINC_H
#define _EZINC_H

#include "fdtd.h"

void ezIncInit(Grid *g);
double ezInc(double time, double location);

#endif