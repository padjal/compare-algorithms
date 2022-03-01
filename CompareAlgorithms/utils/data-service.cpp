#include <vector>
#include <random>
#include "data-service.h"

const int DIFFERENT_ELEMENTS = 3;

std::vector<int>& generateVector(int elems, int min_elem, int max_elem){
    std::vector<int>* result = new std::vector<int> ();

    static std::minstd_rand eng{std::random_device{}()};
    std::uniform_int_distribution rand{0, 5};

    for (int i = 0; i < elems; ++i) {
        // Generate elements and add them to the array
        result->push_back(rand(eng));
    }

    return *result;
}

std::vector<int>& generateReverseSortedVector(int max_elem){
    auto *result = new std::vector<int>();

    for (int i = max_elem; i > 0; --i) {
        result->push_back(i);
    }

    return *result;
}

bool isSorted(const std::vector<int>& v){
    if(v.size() <= 1){
        return true;
    }

    for (int i = 1; i < v.size(); ++i) {
        if(v.at(i - 1) > v.at(i)){
            return false;
        }
    }

    return true;
}

std::vector<int> &generateAlmostSortedVector(int elems) {
    auto *result = new std::vector<int>();

    static std::minstd_rand eng{std::random_device{}()};
    std::uniform_int_distribution rand{0, elems-1};

    for (int i = 0; i < elems; ++i) {
        result->push_back(i);
    }

    for (int i = 0; i < DIFFERENT_ELEMENTS; ++i) {
        // Swap some elements in the sorted array.
        std::swap(result->at(rand(eng)), result->at(rand(eng)));
    }

    return *result;
}
