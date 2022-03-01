#include <algorithm>

void selectionSort(std::vector<int>& numbers) {
    for (int i = 0; i < numbers.size() - 1; ++i) {
        int min_element_index = i;
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (numbers[j] < numbers[min_element_index]) {
                min_element_index = j;
            }
        }
        if (i != min_element_index) {
            std::swap(numbers[i], numbers[min_element_index]);
        }
    }
}