# Made through the aid of GitHub Copilot
# USAGE: "gnuplot animate_wave_1D.gp"
# NOTE: name the output sim_output.csv
# As of 8/23, only works for 1D simulations.

# Find global min and max
stats '<awk -F, "{for(i=1;i<=NF;i++) print $i}" sim_output1.csv' using 1 nooutput
set yrange [STATS_min:STATS_max]

set terminal gif animate delay 10
set output 'wave_animation.gif'
set title "Simulation Output Animation"
set xlabel "Position (spatial index, k)"
set ylabel "E-Field Magnitude (V/m)"

stats 'sim_output1.csv' nooutput

do for [i=0:STATS_records-1] {
    unset arrow
    # Draw vertical lines at positions 100, 110, and 115
    set arrow from 100, graph 0 to 100, graph 1 nohead lc rgb "red" lw 2
    set arrow from 110, graph 0 to 110, graph 1 nohead lc rgb "blue" lw 2
    #set arrow from 115, graph 0 to 115, graph 1 nohead lc rgb "green" lw 2
    plot '<awk -F, "NR==' . (i+1) . '{for(j=1;j<=NF;j++) print j,$j}" sim_output1.csv' using 1:2 with lines title sprintf("Frame %d", i+1)
}

set output