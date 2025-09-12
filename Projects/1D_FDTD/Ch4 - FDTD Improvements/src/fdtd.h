#ifndef _FDTD_H
#define _FDTD_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Physical Constants */
#define EPS0 0.000000000008854187817     // Vacuum permittivity (F/m)
#define MU0 0.0000012566370614     // Vacuum permeability (H/m or N/A^2)
#define C0 299792458.0 // Speed of light in vacuum (m/s)

/* Simulation Space Parameters */
#define LOSS 0.0253146
#define LOSS_LAYER 100
#define L0_EPSR 1.0
#define L1_EPSR 4.0

struct Grid {
    double *ez, *ceze, *cezh;
    double *hy, *chyh, *chye;
    int sizeX;
    int time, maxTime;
    double dt;
    double cdtds;
    double totalEnergy, thresholdEnergy, peakEnergy;
    int peakReached;
};

typedef struct Grid Grid;

/* macros for accessing arrays */
#define Hy(MM)      g->hy[MM]
#define Chyh(MM)    g->chyh[MM]
#define Chye(MM)    g->chye[MM]

#define Ez(MM)      g->ez[MM]
#define Ceze(MM)    g->ceze[MM]
#define Cezh(MM)    g->cezh[MM]

#define SizeX       g->sizeX
#define Time        g->time
#define MaxTime     g->maxTime
#define Dt          g->dt
#define Cdtds       g->cdtds

#define TotalEnergy g->totalEnergy
#define ThresholdEnergy g->thresholdEnergy
#define LastEnergy  g->lastEnergy
#define PeakEnergy  g->peakEnergy
#define PeakReached g->peakReached


/* memory allocation macro */
#define ALLOC_1D(PNTR, NUM, TYPE)                                               \
    PNTR = (TYPE *)calloc(NUM, sizeof(TYPE));                                   \
    if (!PNTR) {                                                                \
        perror("ALLOC_1D");                                                     \
        fprintf(stderr, "Allocation failed for " #PNTR ". Terminating...\n");   \
        exit(-1);                                                               \
    }

void abcInit(Grid *g);
void abc(Grid *g);

void gridInit(Grid *g, int simNum);

void snapshotInit(Grid *g);
void snapshot(Grid *g, int simNum);

void tfsfInit(Grid *g);
void tfsfUpdate(Grid *g);

void updateE(Grid *g);
void updateH(Grid *g);

void runningEzDft(Grid *g);

#endif