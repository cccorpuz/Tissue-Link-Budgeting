/* 
    Part of learning from "Understanding the Finite-Difference Time-Domain Method" by John B. Schneider.
    This code is a bare-bones implementation of the 1D FDTD method.
*/

#include <stdio.h>
#include <math.h>

#define SIZE 200
#define MAX_TIME 1000
#define DUMP_LOCATION 50

int main()
{
    /* 
        define Ez and Hy fields at 200 nodes, and also the impedance of free space 
        in this case, we assume that ez nodes are to the left of hy nodes at the same index    
    */
    double ez[SIZE] = {0.}, hy[SIZE] = {0.}, imp0 = 377.0;
    int qTime, maxTime = MAX_TIME, mm;

    /* do time stepping */
    for (qTime = 0; qTime < maxTime; qTime++)
    {

        /* update the magnetic, Hy, field */
        for (mm = 0; mm < SIZE - 1; mm++)
            hy[mm] = hy[mm] + (ez[mm + 1] - ez[mm]) / imp0;

        /* update the electric, Ez, field */
        for (mm = 1; mm < SIZE; mm++)
            ez[mm] = ez[mm] + (hy[mm] - hy[mm - 1]) * imp0;

        /* hardcode a source node */
        ez[0] = exp(-(qTime - 30.) * (qTime - 30.) / 100.0);

        /* export Ez at DUMP_LOCATION to file */
        static FILE *fp = NULL;
        if (!fp) {
            fp = fopen("1DbareBones.csv", "w");
            if (!fp) {
            perror("Failed to open ez_data.csv");
            return 1;
            }
        }

        /* write the Ez value at the DUMP_LOCATION */
        fprintf(fp, "%g\n", ez[DUMP_LOCATION]);
        if (qTime == maxTime - 1 && fp) {
            fclose(fp);
        }
    } /* end timestepping */



    return 0;
}