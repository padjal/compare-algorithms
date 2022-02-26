#include <iostream>
#include <vector>
#include "algorithms.h"

void printVector(std::vector<int> &v){
    for(int element : v){
        std::cout << element << " ";
    }
}

int main() {
    std::vector<int> v = {5, 2, 1};

    countSort(&v);

    printVector(v);

    return 0;
}
