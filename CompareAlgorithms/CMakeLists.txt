cmake_minimum_required(VERSION 3.20)
project(CompareAlgorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(CompareAlgorithms main.cpp algorithms.h algorithms/count-sort.cpp algorithms/bubble-sort.cpp algorithms/selection-sort.cpp)

add_subdirectory(Google_tests)
