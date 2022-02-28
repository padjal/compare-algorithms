#include <gtest/gtest.h>
#include <random>
#include "../algorithms.h"
#include  "../utils/console-util.h"
#include "../utils/data-service.h"

class SmallNumbers : public ::testing::Test{
protected:
    /*
     * Before each test, add 50 small numbers (from 0 to 5).
     */
    void SetUp() override{
        numbers = generateVector(50, 0, 5);
    }

    void TearDown() override{
        numbers.clear();
    }

    std::vector<int> numbers;
};

TEST_F(SmallNumbers, BubbleSort){
    // Act
    bubbleSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(SmallNumbers, CountSort){
    // Act
    countSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(SmallNumbers, SelectionSort){
    // Act
    selectionSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(SmallNumbers, InsertionSort){
    // Act
    insertionSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(SmallNumbers, MergeSort){
    // Act
    mergeSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(SmallNumbers, QuickSort){
    // Act
    mergeSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}
