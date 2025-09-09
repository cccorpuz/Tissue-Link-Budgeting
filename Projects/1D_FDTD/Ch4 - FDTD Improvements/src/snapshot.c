#include "fdtd.h"

static int temporalStride = 0, spatialStride, startTime, startNode, endNode, frame = 0;
static char basename[80] = "sim_output";
static FILE *snapshot_file = NULL;

void snapshotInit(Grid *g, int simType) {
    
    printf("For the snapshots:\n");
    printf(" Duration of simulation is %d steps.\n", MaxTime);
    printf(" Enter start time and temporal stride: ");
    scanf(" %d %d", &startTime, &temporalStride);
    printf(" Grid has %d total nodes (ranging from 0 to %d).\n", SizeX, SizeX-1);
    printf(" Enter first node, last node, and spatial stride: ");
    scanf(" %d %d %d", &startNode, &endNode, &spatialStride);
    if (simType) 
        basename[10] = '1';
    else 
        basename[10] = '0';

    return;
}

void snapshot(Grid *g) {
    int mm;

    /* ensure temporal stride set to a reasonable value */
    if (temporalStride <= 0) {
        fprintf(stderr,
        "snapshot: snapshotInit must be called before snapshot.\n"
        "Temporal stride must be set to positive value.\n");
        exit(-1);
    }

    /* open the CSV file on the first call */
    if (snapshot_file == NULL && Time >= startTime && (Time - startTime) % temporalStride == 0) {
        char filename[100];
        sprintf(filename, "%s.csv", basename);
        snapshot_file = fopen(filename, "w");
        if (!snapshot_file) {
            fprintf(stderr, "Unable to open snapshot file.\n");
            exit(-1);
        }
    }

    /* get snapshot if temporal conditions met */
    if (snapshot_file && Time >= startTime && (Time - startTime) % temporalStride == 0) {
        fprintf(snapshot_file, "%g", Ez(startNode));
        for (mm = startNode + 1; mm <= endNode; mm += spatialStride)
            fprintf(snapshot_file, ",%g", Ez(mm));
        fprintf(snapshot_file, "\n");
        fflush(snapshot_file);
    }
    return;
}

void snapshotClose() {
    if (snapshot_file) {
        fclose(snapshot_file);
        snapshot_file = NULL;
    }
}

int getTemporalStride() {
    return temporalStride;
}