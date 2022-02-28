project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run
        ReverseSortedTest.cpp
        SmallNumbersTest.cpp
        ../utils/data-service.h
        ../utils/data-service.cpp
        ../utils/io-util.h
        ../utils/io-util.cpp
        ../algorithms.h
        ../algorithms/bubble-sort.cpp
        ../algorithms/count-sort.cpp
        ../algorithms/selection-sort.cpp
        ../algorithms/insertion-sort.cpp
        ../algorithms/merge-sort.cpp
        ../algorithms/quick-sort.cpp ../utils/io-util.cpp ../utils/io-util.h)

# linking Google_Tests_run with DateConverter_lib which will be tested
#target_link_libraries(Google_Tests_run DateConverter_lib)

target_link_libraries(Google_Tests_run gtest gtest_main)