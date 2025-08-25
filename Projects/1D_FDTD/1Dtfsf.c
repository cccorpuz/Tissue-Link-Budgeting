/* 
    Part of learning from "Understanding the Finite-Difference Time-Domain Method" by John B. Schneider.
    This code is a bare-bones implementation of the 1D FDTD method.
*/

#include <stdio.h>
#include <math.h>

#define SIZE 200
#define MAX_TIME 1000
#define SRC1 50

int main()
{
    /* 
        define Ez and Hy fields at 200 nodes, and also the impedance of free space 
        in this case, we assume that ez nodes are to the left of hy nodes at the same index    
    */
    double ez[SIZE] = {0.}, hy[SIZE] = {0.}, epsR[SIZE], imp0 = 377.0;
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
    for (mm = 0; mm < SIZE; mm++)
        if (mm < 100)
            epsR[mm] = 1.0;
        else
            epsR[mm] = 4.0;


    /* do time stepping */
    for (qTime = 0; qTime < maxTime; qTime++)
    {

        hy[SIZE - 1] = hy[SIZE - 2]; /* ABC 2 / right */

        /* update the magnetic, Hy, field */
        for (mm = 0; mm < SIZE - 1; mm++) 
            hy[mm] = hy[mm] + (ez[mm + 1] - ez[mm]) / imp0;
        
        /* TFSF correction for magnetic field */
        hy[SRC1 - 1] += -(1/imp0) * exp(-(qTime - 30.) * (qTime - 30.) / 100.0); 
        
        /* 
            Note that there will still be a reflection at the far side because of 
            the speed of wave slower in the higher epsR region, so we need a better ABC definition
            since the current one is based on the Courant number being at unity but is not true
            since the relative permittivity is 9 in the far dielectric region
        */
        ez[0] = ez[1]; /* ABC 1, very basic where future field only depends on past, interior to the sim, fields */
        ez[SIZE - 1] = ez[SIZE - 2]; /* ABC 1 */

        /* update the electric, Ez, field */
        for (mm = 1; mm < SIZE; mm++) 
            ez[mm] = ez[mm] + (hy[mm] - hy[mm - 1]) * imp0 / epsR[mm];
        
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