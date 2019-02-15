# CMakeList.txt : CMake project for console-calculator, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (console-calculator main.cpp extras.cpp ask.cpp operations.cpp) 

# TODO: Add tests and install targets if needed.
