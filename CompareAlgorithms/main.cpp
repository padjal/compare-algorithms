#include <iostream>
#include <vector>
#include "algorithms.h"
#include "utils/logger.h"

void printVector(std::vector<int> &v){
    for(int element : v){
        std::cout << element << " ";
    }
}

typedef void (*sortAlgorithm)(std::vector<int>&);

int main() {
    Logger* logger = new Logger();

    std::vector<int> v = {5, 2, 1, 2, 9};

    /*sortAlgorithm sortFucntions[] = {
            bubbleSort,
            selectionSort,
            bubbleSort
    };

    for(auto sort_fucntion : sortFucntions){
        // Perform sort measurements for each sorting algorithm

        // Measure small collections
            // Measure with numbers [0, 5]
            // Measure with numbers [0, 4000]
            // Measure with almost sorted collection
            // Measure with reversely sorted collection
        // Measure big collections
            // Measure with numbers [0, 5]
            // Measure with numbers [0, 4000]
            // Measure with almost sorted collection
            // Measure with reversely sorted collection

        // Generate data
        // Measure sort
        // Record data
    }*/

    logger->log("hey");

    logger->log("what's up");

    return 0;
}
