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

struct Grid {
    double *ez, *ceze, *cezh;
    double *hy, *chyh, *chye;
    int sizeX;
    int time, maxTime;
    double dt;
    double cdtds;
    double totalEnergy, thresholdEnergy, peakEnergy, lastEnergy;
    int peakReached;
    double loss1, loss2, loss3;
    int lossLayer1, lossLayer2, lossLayer3;
    double l0Epsr, l1Epsr, l2Epsr, l3Epsr;
};

typedef struct Grid Grid;

/* macros for accessing arrays */
#define Hy(MM)          g->hy[MM]
#define Chyh(MM)        g->chyh[MM]
#define Chye(MM)        g->chye[MM]

#define Ez(MM)          g->ez[MM]
#define Ceze(MM)        g->ceze[MM]
#define Cezh(MM)        g->cezh[MM]

#define SizeX           g->sizeX
#define Time            g->time
#define MaxTime         g->maxTime
#define Dt              g->dt
#define Cdtds           g->cdtds

#define TotalEnergy     g->totalEnergy
#define ThresholdEnergy g->thresholdEnergy
#define LastEnergy      g->lastEnergy
#define PeakEnergy      g->peakEnergy
#define PeakReached     g->peakReached

#define LOSS_1          g->loss1
#define LOSS_2          g->loss2
#define LOSS_3          g->loss3

#define LOSS_LAYER_1    g->lossLayer1
#define LOSS_LAYER_2    g->lossLayer2
#define LOSS_LAYER_3    g->lossLayer3

#define L0_EPSR         g->l0Epsr
#define L1_EPSR         g->l1Epsr
#define L2_EPSR         g->l2Epsr
#define L3_EPSR         g->l3Epsr


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

void gridInit(Grid *g, int simType);
void gridPropertyInit(Grid *g, int simType);

void snapshotInit(Grid *g);
void snapshot(Grid *g, int simNum);
void timestepOut(Grid *g);

void tfsfInit(Grid *g);
void tfsfUpdate(Grid *g);

void updateE(Grid *g);
void updateH(Grid *g);

void runningEzDft(Grid *g);

#endif