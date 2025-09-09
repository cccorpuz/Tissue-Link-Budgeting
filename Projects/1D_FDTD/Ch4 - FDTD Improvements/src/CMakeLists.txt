# # Set the minimum version of CMake required
# cmake_minimum_required(VERSION 3.10)

# # Define the project name
# project(FDTD_Improvements C)

# # Collect all the source files in the current directory
# file(GLOB SOURCE_FILES "*.c")

# # Add the executable target. 
# # This command automatically handles compilation and linking.
# add_executable(engine ${SOURCE_FILES})

# # Link the math library and the mingw32 library.
# # The `mingw32` library explicitly tells the linker to use the console entry point.
# target_link_libraries(engine PRIVATE m mingw32)

# # Explicitly add the -mconsole flag to the linker options for this target.
# # This is a more direct and reliable way to fix the "undefined reference to WinMain" error.
# target_link_options(engine PRIVATE -mconsole)

# # Set the output directory for the executable.
# # This places the `engine` executable in a 'run' folder
# # one directory up from the build directory.
# set_target_properties(engine PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../run")


# # To configure and build with CMake, you would typically follow these steps:
# # 1. Create a build directory: `mkdir build`
# # 2. Change into the build directory: `cd build`
# # 3. Configure the project: `cmake ..`
# # 4. Build the project: `cmake --build .`
# # 5. Run the executable: `./engine` (or `engine.exe` on Windows)

# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name
project(FDTD_Improvements C)

# Collect all the source files in the current directory
file(GLOB SOURCE_FILES "*.c")

# On MinGW/MSYS2, pkg-config is the most reliable way to find libraries.
# 1. Find the pkg-config tool.
find_package(PkgConfig REQUIRED)

# 2. Use pkg-config to find FFTW3. This will set the
#    FFTW3_INCLUDE_DIRS and FFTW3_LIBRARIES variables.
pkg_check_modules(FFTW3 REQUIRED fftw3)

# Create the executable from your source files.
add_executable(engine ${SOURCE_FILES})

# Add the FFTW3 include directory to the target's include paths.
# This is necessary for the compiler to find <fftw3.h>.
target_include_directories(engine PRIVATE ${FFTW3_INCLUDE_DIRS})

# Link the executable against the math library (-lm) and the FFTW3 library.
target_link_libraries(engine PRIVATE m ${FFTW3_LIBRARIES})

# Set the output directory for the executable so it's easy to find.
set_target_properties(engine PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../run")

