#!/usr/bin/env bash
rm -rf build
rm -f run/sim_output*
mkdir build && cd build && cmake ../src && ninja && cd ../run && ./engine && gnuplot animate_wave_1D.gp