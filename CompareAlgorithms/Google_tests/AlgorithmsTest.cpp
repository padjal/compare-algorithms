#include <gtest/gtest.h>
#include "../algorithms.h"

class ReverseSorted : public ::testing::Test{
protected:
    /*
     * Before each test, add numbers from 100 to 1 (reverse order).
     */
    void SetUp() override{
        for (int i = 100; i > 0; --i) {
            numbers.push_back(i);
        }
    }

    void TearDown() override{
        numbers.clear();
    }

    std::vector<int> numbers;
};

/*
 * Checks whether the vector is properly sorted in ascending order.
 */
bool isSorted(std::vector<int>* v){
    if(v->size() <= 1){
        return true;
    }

    for (int i = 1; i < v->size(); ++i) {
        if(v->at(i - 1) > v->at(i)){
            return false;
        }
    }

    return true;
}

void printVector(std::vector<int> &v){
    for(int element : v){
        std::cout << element << " ";
    }
}

TEST_F(ReverseSorted, BubbleSort){
    // Act
    bubbleSort(&numbers);

    bool result = isSorted(&numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}