/*
 * Implements the bubble sort algorithm.
 */

#include <vector>

void bubbleSort(std::vector<int>* numbers) {
    bool array_sorted = false;

    for (int index = 0; index < numbers->size() - 2 && !array_sorted; ++index) {
        int swaps_per_iteration = 0;
        for (int j = 0; j < numbers->size() - index - 1; ++j) {
            if (numbers->at(j) > numbers->at(j+1)) {
                std::swap(numbers->at(j), numbers->at(j + 1));
                swaps_per_iteration++;
            }
        }
        if (swaps_per_iteration == 0) {
            array_sorted = true;
        }
    }
}