#!/usr/bin/env bash
rm -rf build
mkdir build && cd build && cmake ../src && ninja && cd ../run && ./engine && gnuplot animate_wave_1D.gp && gnuplot plot_s11.gp