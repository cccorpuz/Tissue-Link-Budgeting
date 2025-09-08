#include "fdtd.h"

static int temporalStride = 0, spatialStride, startTime, startNode, endNode, frame = 0;
static char basename[80] = "sim_output";

void snapshotInit(Grid *g) {
    
    printf("For the snapshots:\n");
    printf(" Duration of simulation is %d steps.\n", MaxTime);
    printf(" Enter start time and temporal stride: ");
    scanf(" %d %d", &startTime, &temporalStride);
    printf(" Grid has %d total nodes (ranging from 0 to %d).\n", SizeX, SizeX-1);
    printf(" Enter first node, last node, and spatial stride: ");
    scanf(" %d %d %d", &startNode, &endNode, &spatialStride);

    return;
}

void snapshot(Grid *g) {
    static FILE *snapshot = NULL;
    int mm;

    /* ensure temporal stride set to a reasonable value */
    if (temporalStride <= 0) {
        fprintf(stderr,
        "snapshot: snapshotInit must be called before snapshot.\n"
        "Temporal stride must be set to positive value.\n");
        exit(-1);
    }

    /* open the CSV file on the first call */
    if (snapshot == NULL && Time >= startTime && (Time - startTime) % temporalStride == 0) {
        char filename[100];
        sprintf(filename, "%s.csv", basename);
        snapshot = fopen(filename, "w");
        if (!snapshot) {
            fprintf(stderr, "Unable to open snapshot file.\n");
            exit(-1);
        }
    }

    /* get snapshot if temporal conditions met */
    if (Time >= startTime && (Time - startTime) % temporalStride == 0) {
        fprintf(snapshot, "%g", Ez(startNode));
        for (mm = startNode + 1; mm <= endNode; mm += spatialStride)
            fprintf(snapshot, ",%g", Ez(mm));
        fprintf(snapshot, "\n");
        fflush(snapshot);
    }
    return;
}