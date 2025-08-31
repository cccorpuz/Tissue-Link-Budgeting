#!/usr/bin/env bash

cd build && cmake ../src && ninja && cd ../run && ./engine && gnuplot animate_wave_1D.gp