#include <iostream>
#include <vector>

void printVector(std::vector<int> &v){
    for(int element : v){
        std::cout << element << " ";
    }
}