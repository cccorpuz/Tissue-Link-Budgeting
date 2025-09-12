# Install script for directory: C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Project")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/msys64/mingw64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Tissue-Link-Budgeting/build/libCSXCAD.dll.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "C:/Tissue-Link-Budgeting/build/libCSXCAD.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCSXCAD.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCSXCAD.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "C:/msys64/mingw64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCSXCAD.dll")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("C:/Tissue-Link-Budgeting/build/CMakeFiles/CSXCAD.dir/install-cxx-module-bmi-Debug.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CSXCAD" TYPE FILE FILES
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/ContinuousStructure.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimitives.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSProperties.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSRectGrid.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSXCAD_Global.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/ParameterObjects.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSFunctionParser.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSUseful.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/ParameterCoord.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSTransform.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSBackgroundMaterial.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimPoint.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimBox.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimMultiBox.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimSphere.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimSphericalShell.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimCylinder.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimCylindricalShell.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimPolygon.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimLinPoly.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimRotPoly.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimPolyhedron.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimPolyhedronReader.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimCurve.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimWire.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPrimUserDefined.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropUnknown.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropMaterial.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropDispersiveMaterial.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropLorentzMaterial.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropDebyeMaterial.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropDiscMaterial.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropLumpedElement.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropMetal.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropConductingSheet.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropExcitation.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropProbeBox.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropDumpBox.h"
    "C:/Tissue-Link-Budgeting/openEMS/openEMS-Project/CSXCAD/src/CSPropResBox.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Tissue-Link-Budgeting/build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Tissue-Link-Budgeting/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
