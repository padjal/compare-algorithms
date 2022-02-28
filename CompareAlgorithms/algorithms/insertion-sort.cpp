#include <vector>

int insertionSort(std::vector<int>& numbers) {
    int key, j, elements_in_place = 0;
    for (int index = 1; index < numbers.size(); ++index) {
        key = numbers.at(index);  // keep so that we don't lose it
        j = index - 1;       // previous element's index

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && numbers.at(j) > key) {
            numbers.at(j + 1) = numbers.at(j);
            j = j - 1;
        }
        numbers.at(j + 1) = key;
        if (j + 1 == index) {
            elements_in_place++;
        }
    }
    return elements_in_place;
}