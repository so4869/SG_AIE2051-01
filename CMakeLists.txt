cmake_minimum_required(VERSION 3.30)
project(SG_AIE2051_01)

set(CMAKE_CXX_STANDARD 14)

#include_directories(W5/L05)

#add_executable(SG_AIE2051_01
#    W5/L05/array.cpp
#    W5/L05/array.h
#    W5/L05/main.cpp)

#add_subdirectory(L05-3)
#add_subdirectory(L05-2)

file(GLOB CHILD_DIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}, */CMakeLists.txt)
foreach (child ${CHILD_DIRS})
    get_filename_component(dir ${child} DIRECTORY)
    add_subdirectory(${dir})
endforeach ()