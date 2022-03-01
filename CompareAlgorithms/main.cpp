#include <iostream>
#include <chrono>
#include <vector>
#include "algorithms.h"
#include "utils/logger.h"
#include "utils/data-service.h"
#include "utils/io-util.h"


typedef void (*sortAlgorithm)(std::vector<int>&);

int main() {
    Logger* logger = new Logger("log.txt");

    logger->log("test");

    std::vector<int> v = {5, 2, 1, 2, 9};

    sortAlgorithm sortFucntions[] = {
            bubbleSort,
            countSort,
            insertionSort,
            mergeSort,
            quickSort,
            selectionSort
    };



    // Generate data

    // Measure small collections (50 - 300 elements), step 10
        // Measure with numbers [0, 5]
        // Measure with numbers [0, 4000]
        // Measure with almost sorted collection
        // Measure with reversely sorted collection

    // Measure big collections (100 - 4000 elements), step 100
        // Measure with numbers [0, 5]
        // Measure with numbers [0, 4000]
        // Measure with almost sorted collection
        // Measure with reversely sorted collection

    auto col1 = generateVector(300, 0, 5);
    auto col2 = generateVector(300, 0, 4000);
    auto col3 = generateAlmostSortedVector(300);
    auto col4 = generateReverseSortedVector(300);

    auto col5 = generateVector(4000, 0, 5);
    auto col6 = generateVector(4000, 0, 4000);
    auto col7 = generateAlmostSortedVector(4000);
    auto col8 = generateReverseSortedVector(4000);

    std::vector<int> current_collection;

    std::vector<std::vector<int>> small_collections = std::vector<std::vector<int>> {
        col1
    };

    for(auto col : small_collections){
        int measurement = 0;

        // Make measurements
        for(auto sort_function : sortFucntions) {
            switch (measurement) {
                case 0: std::cout << ",bubble sort\n"
            }
            std::cout << measurement << "\n";

            int elements = 50;

            while (elements <= 300) {
                current_collection.clear();

                std::cout << "Elements: " << elements << " ";

                // Copy elements to collection.
                for (int i = 0; i < elements; ++i) {
                    current_collection.push_back(col[i]);
                }

                long long sum = 0;

                // Perform sort measurements for each sorting algorithm 10 times and take average
                for (int i = 0; i < 12; ++i) {
                    std::vector<int> vector_under_test = current_collection;

                    if (i < 2) {
                        // Processor optimizations goes here
                        sort_function(vector_under_test);

                        continue;
                    }

                    auto start = std::chrono::high_resolution_clock::now();

                    sort_function(vector_under_test);

                    auto elapsed = std::chrono::high_resolution_clock::now() - start;

                    long long milliseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

                    sum += milliseconds;
                }

                double average_time = sum / 10;

                std::cout << "Average time: " << average_time << std::endl;

                elements += 10;
            }

            measurement++;
        }
    }



    return 0;
}
