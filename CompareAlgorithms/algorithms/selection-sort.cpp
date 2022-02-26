#include <algorithm>

int selectionSort(std::vector<int> arr, int elements) {
    int swaps = 0;

    for (int i = 0; i < elements - 1; ++i) {
        int min_element_index = i;
        for (int j = i + 1; j < elements; ++j) {
            if (arr[j] < arr[min_element_index]) {
                min_element_index = j;
            }
        }
        if (i != min_element_index) {
            std::swap(arr[i], arr[min_element_index]);
            swaps++;
        }
    }

    return swaps;
}