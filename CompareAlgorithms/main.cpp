#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>
#include "algorithms.h"
#include "utils/logger.h"
#include "utils/data-service.h"
#include "utils/io-util.h"

typedef void (*sortAlgorithm)(std::vector<int>&);

int getAverageTime(std::vector<int>& nums, sortAlgorithm sort){
    // Perform sort measurements for each sorting algorithm 10 times and take average
    long sum = 0;

    for (int i = 0; i < 12; ++i) {
        std::vector<int> vector_under_test = nums;

        if (i < 2) {
            // Processor optimizations goes here
            sort(vector_under_test);

            continue;
        }

        auto start = std::chrono::high_resolution_clock::now();

        sort(vector_under_test);

        auto elapsed = std::chrono::high_resolution_clock::now() - start;

        long milliseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

        sum += milliseconds;
    }

    return sum / 10;
}

int main() {
    Logger* logger = new Logger("log.txt");

    // Combine all sorting functions
    sortAlgorithm sortFunctions[] = {
            bubbleSort,
            countSort,
            insertionSort,
            mergeSort,
            quickSort,
            selectionSort
    };

    // Generate data

    // Measure with numbers [0, 5]
    auto col1 = generateVector(300, 0, 5);
    // Measure with numbers [0, 4000]
    auto col2 = generateVector(300, 0, 4000);
    // Measure with almost sorted collection
    auto col3 = generateAlmostSortedVector(300);
    // Measure with reversely sorted collection
    auto col4 = generateReverseSortedVector(300);

    // Measure with numbers [0, 5]
    auto col5 = generateVector(4000, 0, 5);
    // Measure with numbers [0, 4000]
    auto col6 = generateVector(4000, 0, 4000);
    // Measure with almost sorted collection
    auto col7 = generateAlmostSortedVector(4000);
    // Measure with reversely sorted collection
    auto col8 = generateReverseSortedVector(4000);

    std::vector<std::vector<int>> small_collections = std::vector<std::vector<int>> {
            col1, col2, col3, col4
    };

    std::vector<int> current_collection;
    int collection_index = 0;
    std::ofstream outFile;

    // Measure small small_collections (50 - 300 elements), step 10
    for(auto collection : small_collections){
        switch (collection_index) {
            case 0: outFile.open("../results/collection_1.csv"); break;
            case 1: outFile.open("../results/collection_2.csv"); break;
            case 2: outFile.open("../results/collection_3.csv"); break;
            case 3: outFile.open("../results/collection_4.csv"); break;
        }
        
        outFile << "Elements, Bubble-sort, Count-sort, Insertion-sort, Merge-sort, Quick-sort, Selection-sort\n";

        int elements = 50;
        while (elements <= 300){
            outFile << elements << ",";
            int sort_func_index = 0;
            for(auto sort_function : sortFunctions){
                current_collection.clear();

                for (int i = 0; i < elements; ++i) {
                    current_collection.push_back(collection[i]);
                }

                double average_time = getAverageTime(current_collection, sort_function);

                if (sort_func_index != 5){
                    outFile << average_time << ",";
                }else{
                    outFile << average_time;
                }

                sort_func_index++;
            }

            elements+=10;
            outFile << std::endl;
        }

        outFile.close();
        collection_index++;
    }

    std::vector<std::vector<int>> big_collections = std::vector<std::vector<int>> {
            col5, col6, col7, col8
    };

    collection_index = 0;

    // Measure big small_collections (100 - 4000 elements), step 100
    for(auto collection : big_collections){
        switch (collection_index) {
            case 0:
                outFile.open("../results/collection_5.csv");
                std::cout << "Started doing collection 5\n";
                break;
            case 1: outFile.open("../results/collection_6.csv");
                std::cout << "Started doing collection 6\n";
                break;
            case 2:
                outFile.open("../results/collection_7.csv");
                std::cout << "Started doing collection 7\n";
                break;
            case 3:
                outFile.open("../results/collection_8.csv");
                std::cout << "Started doing collection 8\n";
                break;
        }

        outFile << "Elements, Bubble-sort, Count-sort, Insertion-sort, Merge-sort, Quick-sort, Selection-sort\n";

        int elements = 100;
        while (elements <= 4000){
            outFile << elements << ",";
            int sort_func_index = 0;
            for(auto sort_function : sortFunctions){
                current_collection.clear();

                for (int i = 0; i < elements; ++i) {
                    current_collection.push_back(collection[i]);
                }

                double average_time = getAverageTime(current_collection, sort_function);

                if (sort_func_index != 5){
                    outFile << average_time << ",";
                }else{
                    outFile << average_time;
                }

                sort_func_index++;
            }

            elements+=100;
            outFile << std::endl;
        }

        outFile.close();
        collection_index++;
    }

    return 0;
}
