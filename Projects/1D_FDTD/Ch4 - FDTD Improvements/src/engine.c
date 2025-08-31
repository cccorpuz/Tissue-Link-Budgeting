/* improved3.c: FDTD simulation where main() is primarily used to call
 * other functions that perform the necessary operations. */
 #include "fdtd.h"
 int main()
 {
    Grid *g;
    ALLOC_1D(g, 1, Grid); 
    gridInit(g);
    abcInit(g);
    tfsfInit(g);
    snapshotInit(g);
    
    for (Time = 0; Time < MaxTime; Time++) {
        updateH(g);
        tfsfUpdate(g); 
        abc(g);
        updateE(g);
        snapshot(g);
    } 
    return 0;
 }