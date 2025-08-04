#!/bin/bash

#set -e  # Optional: stop on error

install_if_missing() {
  for pkg in "$@"; do
    if pacman -Qi "$pkg" &>/dev/null; then
      echo "[✓] $pkg already installed"
    else
      echo "[+] Installing $pkg..."
      pacman -S --noconfirm --needed "$pkg"
    fi
  done
}

# System update
pacman -Syu --noconfirm

# Install packages intelligently
install_if_missing \
  git \
  base-devel \
  mingw-w64-ucrt-x86_64-toolchain \
  mingw-w64-x86_64-cmake \
  mingw-w64-x86_64-ninja \
  mingw-w64-x86_64-tinyxml \
  mingw-w64-x86_64-hdf5 \
  mingw-w64-x86_64-vtk \
  mingw-w64-x86_64-qt6 \
  mingw-w64-x86_64-boost \
  mingw-w64-x86_64-boost-libs \
  mingw-w64-x86_64-cgal \
  mingw-w64-x86_64-msmpi \
  mingw-w64-x86_64-nlohmann-json \
  mingw-w64-x86_64-fast_float \
  mingw-w64-x86_64-utf8cpp \
  mingw-w64-x86_64-freetype

# Compiling
cd /c/
mkdir test
cd test
mkdir openEMS
cd openEMS
rm -rf *
git clone --recursive https://github.com/thliebig/openEMS-Project.git
cd openEMS-Project/fparser
sed -i '7s/.*/cmake_minimum_required(VERSION 3.5)/' CMakeLists.txt
mkdir build
cd build
rm -rf
cmake -DCMAKE_INSTALL_PREFIX=/c/test/openEMS -G "MinGW Makefiles" ..
mingw32-make -j$(nproc) && mingw32-make install
cd ../../CSXCAD
mkdir build
cd build
rm -rf *
cmake -DCMAKE_INSTALL_PREFIX=/c/test/openEMS -DFPARSER_ROOT_DIR=/c/test/openEMS -G "MinGW Makefiles" ..
mingw32-make -j$(nproc) && mingw32-make install
cd ../../qcsxcad
mkdir build
cd build
rm -rf *
cmake -DCMAKE_INSTALL_PREFIX=/c/test/openEMS -DCSXCAD_ROOT_DIR=/c/test/openEMS/include -G "MinGW Makefiles" ..
mingw32-make -j$(nproc) && mingw32-make install
cd ../../appcsxcad
sed -i '120s/.*/SET(VTK_QT_VERSION "6")/' CMakeLists.txt
mkdir build
cd build
rm -rf
cmake -DCMAKE_INSTALL_PREFIX=/c/test/openEMS -DCSXCAD_ROOT_DIR=/c/test/openEMS/include -DQCSXCAD_ROOT_DIR=/c/test/openEMS/include -G "MinGW Makefiles" ..
mingw32-make -j$(nproc) && mingw32-make install
cd ../../openems
mkdir build
cd build
rm -rf *
cmake -DCMAKE_INSTALL_PREFIX=/c/test/openEMS -DFPARSER_ROOT_DIR=/c/test/openEMS -DCSXCAD_ROOT_DIR=/c/test/openEMS/include -G "MinGW Makefiles" ..
mingw32-make -j$(nproc) && mingw32-make install
cp /c/test/openEMS/lib/lib{CSXCAD,fparser,QCSXCAD}.dll /c/test/openEMS/bin/
cd /c/test/openEMS/openEMS-Project/CSXCAD/python
python setup.py build_ext -I/c/test/openEMS/include -L/c/test/openEMS/lib
python setup.py install
cd /c/test/openEMS/openEMS-Project/openEMS/python
python setup.py build_ext -I/c/test/openEMS/include -L/c/test/openEMS/bin
python setup.py install