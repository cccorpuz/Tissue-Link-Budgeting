#include "fdtd.h"

static int temporalStride = 0, spatialStride, startTime, startNode, endNode, frame = 0;

void snapshotInit(Grid *g) {
    
    printf("For the snapshots:\n");
    printf(" Duration of simulation is %d steps.\n", MaxTime);
    printf(" Enter field recording temporal stride: ");
    startTime = 0;
    scanf(" %d", &temporalStride);
    printf(" Grid has %d total nodes (ranging from 0 to %d).\n", SizeX, SizeX-1);
    // printf(" Enter first node, last node, and spatial stride: ");
    // scanf(" %d %d %d", &startNode, &endNode, &spatialStride);
    startNode = 0;
    endNode = SizeX - 1;
    spatialStride = 1;
    printf(" Recording nodes from %d to %d with stride %d\n", startNode, endNode, spatialStride);

    return;
}

void snapshot(Grid *g, int simNum) {
    int mm;
    char filename[100], basename[80] = "sim_output", numStr[20];
    FILE *snapshot;

    itoa(simNum, numStr, 10);
    strcat(basename, numStr);


    /* ensure temporal stride set to a reasonable value */
    if (temporalStride <= 0) {
        fprintf(stderr,
        "snapshot: snapshotInit must be called before snapshot.\n"
        "Temporal stride must be set to positive value.\n");
        exit(-1);
    }

    if (Time >= startTime && (Time - startTime) % temporalStride == 0) {
        sprintf(filename, "%s.csv", basename);
        snapshot = fopen(filename, "a");
        if (!snapshot) {
            fprintf(stderr, "Error opening snapshot file %s\n", filename);
            exit(-1);
        }
        for (mm = startNode; mm <= endNode; mm += spatialStride) {
            fprintf(snapshot, "%g", Ez(mm));
            if (mm == endNode)
                fprintf(snapshot, "\n");
            else
                fprintf(snapshot, ", ");
        }
        fclose(snapshot);
    }

    return;
}
