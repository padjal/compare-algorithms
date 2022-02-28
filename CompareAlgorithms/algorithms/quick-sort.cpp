#include <vector>

void quickSortRecursive(std::vector<int> &v, int low, int high) {
    int i = low, j = high;
    int pivot = v.at((low + high) / 2);

    do {
        while (v.at(i) < pivot) {
            i++;
        }
        while (v.at(j) > pivot) {
            j--;
        }

        if (i <= j) {
            if (v.at(i) > v.at(j)) {
                std::swap(v.at(i), v.at(j));
            }
            i++;
            j--;
        }
    } while (i <= j);

    if (i < high) {
        quickSortRecursive(v, i, high);
    }
    if (low < j) {
        quickSortRecursive(v, low, j);
    }
}

void quickSort(std::vector<int> &numbers){
    quickSortRecursive(numbers, 0, numbers.size() - 1);
}

