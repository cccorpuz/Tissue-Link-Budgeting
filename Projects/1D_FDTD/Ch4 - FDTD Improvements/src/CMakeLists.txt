# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name
project(FDTD_Improvements C)

# Collect all the source files in the current directory
file(GLOB SOURCE_FILES "*.c")

# Add the executable target. 
# This command automatically handles compilation and linking.
add_executable(engine ${SOURCE_FILES})

# Link the math library and the mingw32 library.
# The `mingw32` library explicitly tells the linker to use the console entry point.
target_link_libraries(engine PRIVATE m mingw32)

# Explicitly add the -mconsole flag to the linker options for this target.
# This is a more direct and reliable way to fix the "undefined reference to WinMain" error.
target_link_options(engine PRIVATE -mconsole)

# Set the output directory for the executable.
# This places the `engine` executable in a 'run' folder
# one directory up from the build directory.
set_target_properties(engine PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../run")


# To configure and build with CMake, you would typically follow these steps:
# 1. Create a build directory: `mkdir build`
# 2. Change into the build directory: `cd build`
# 3. Configure the project: `cmake ..`
# 4. Build the project: `cmake --build .`
# 5. Run the executable: `./engine` (or `engine.exe` on Windows)
