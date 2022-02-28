#include <iostream>
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

    for(auto sort_fucntion : sortFucntions){
        // Perform sort measurements for each sorting algorithm

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

        // Measure sort
        // Record data
    }

    return 0;
}
