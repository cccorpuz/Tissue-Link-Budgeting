set title "Wave Progression"
set xlabel "x-position"
set ylabel "y-position"
set zlabel "Amplitude"
set pm3d
splot "sim_output.csv" matrix with pm3d