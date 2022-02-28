cmake_minimum_required(VERSION 3.20)
project(CompareAlgorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(CompareAlgorithms
        main.cpp
        algorithms.h
        algorithms/count-sort.cpp
        algorithms/bubble-sort.cpp
        algorithms/selection-sort.cpp
        utils/logger.cpp
        utils/logger.h
        algorithms/insertion-sort.cpp
        algorithms/merge-sort.cpp
        algorithms/quick-sort.cpp
        utils/data-service.h
        utils/data-service.cpp
        utils/io-util.h
        utils/io-util.cpp)

add_subdirectory(Google_tests)
