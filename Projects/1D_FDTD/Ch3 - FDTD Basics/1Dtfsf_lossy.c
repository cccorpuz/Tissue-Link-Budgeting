/* 
    Part of learning from "Understanding the Finite-Difference Time-Domain Method" by John B. Schneider.
    This code is a bare-bones implementation of the 1D FDTD method.
*/

#include <stdio.h>
#include <math.h>

#define SIZE 200
#define MAX_TIME 1000
#define SRC1 50

#define EPSR0 1.0
#define LOSS0 0.0

#define EPSR1 4.0
#define LOSS1 0.1 

#define BOUNDARY1 100

int main()
{
    /* 
        define Ez and Hy fields at 200 nodes, and also the impedance of free space 
        in this case, we assume that ez nodes are to the left of hy nodes at the same index    
    */
    double ez[SIZE] = {0.}, hy[SIZE] = {0.}, epsR[SIZE], sigma[SIZE], imp0 = 377.0;
    double ceze[SIZE], cezh[SIZE];
    int qTime, maxTime = MAX_TIME, mm;

    /* Snapshot definitions */
    char basename[80] = "sim", filename[100];
    int frame = 0;
    FILE *snapshot;

    /* Initialize e and h fields */
    for (mm = 0; mm < SIZE; mm++) 
        ez[mm] = 0.0;
    for (mm = 0; mm < SIZE - 1; mm++) 
        hy[mm] = 0.0;

    /* set relative permittivities */
    for (mm = 0; mm < SIZE; mm++) {
        if (mm < BOUNDARY1) {
            epsR[mm] = EPSR0;
            sigma[mm] = LOSS0;
        }
        else {
            epsR[mm] = EPSR1;
            sigma[mm] = LOSS1;
        }
    }

    /* set electric field update coefficients */
    for (mm = 0; mm < SIZE; mm++) {
        ceze[mm] = (1. - sigma[mm]) / (1. + sigma[mm]);
        cezh[mm] = (imp0 / epsR[mm]) / (1. + sigma[mm]);
    }

    /* ---------------- */
    /* do time stepping */
    /* ---------------- */
    for (qTime = 0; qTime < maxTime; qTime++)
    {
        /* ABC update */
        hy[SIZE - 1] = hy[SIZE - 2]; /* ABC 2 / right */

        /* update the magnetic, Hy, field */
        for (mm = 0; mm < SIZE - 1; mm++) 
            hy[mm] = hy[mm] + (ez[mm + 1] - ez[mm]) / imp0;
        
        /* TFSF correction for magnetic field */
        hy[SRC1 - 1] += -(1/imp0) * exp(-(qTime - 30.) * (qTime - 30.) / 100.0); 
        
        /* ABC update */
        ez[0] = ez[1]; /* ABC 1, very basic where future field only depends on past, interior to the sim, fields */
        ez[SIZE - 1] = ez[SIZE - 2]; /* ABC 2 / right */

        /* update the electric, Ez, field */
        for (mm = 1; mm < SIZE; mm++) 
            ez[mm] = ceze[mm] * ez[mm] + cezh[mm] * (hy[mm] - hy[mm - 1]);
        
        /* TFSF correction for electric field */
        ez[SRC1] += exp(-(qTime + 0.5 - (-0.5) - 30.) * (qTime + 0.5 - (-0.5) - 30.) / 100.0);

        /* snapshot of whole space as CSV when qTime is multiple of 10 */
        if (qTime % 10 == 0) {
            snapshot = fopen("sim_output.csv", qTime == 0 ? "w" : "a");
            for (mm = 0; mm < SIZE; mm++) {
                fprintf(snapshot, "%g", ez[mm]);
                if (mm < SIZE - 1)
                    fprintf(snapshot, ",");
            }
            fprintf(snapshot, "\n");
            fclose(snapshot);
        }
    } /* end timestepping */



    return 0;
}