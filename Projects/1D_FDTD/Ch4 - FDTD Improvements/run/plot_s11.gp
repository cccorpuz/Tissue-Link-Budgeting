# Gnuplot script to plot S11 parameter from s11.csv

# Set the output terminal and file
set terminal pngcairo size 1024,768 enhanced font 'Verdana,10'
set output 's11_plot.png'

# Set plot title and labels
set title "S11 Reflection Coefficient vs. Frequency"
set xlabel "Frequency (GHz)"
set ylabel "S11 (dB)"

# Set grid
set grid

# Set datafile separator to comma
set datafile separator ","

# Plot the data from s11.csv
# The x-axis is frequency in Hz, so we divide by 1e9 to get GHz.
# The y-axis is S11, which is already in dB.
# We skip the first line which is the header.
plot 's11.csv' using ($1/1e9):2 with lines title 'S11' 