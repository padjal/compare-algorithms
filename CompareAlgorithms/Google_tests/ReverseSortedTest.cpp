#include <gtest/gtest.h>
#include "../algorithms.h"
#include "../utils/data-service.h"
#include "../utils/io-util.h"

class ReverseSorted : public ::testing::Test{
protected:
    /*
     * Before each test, add numbers from 100 to 1 (reverse order).
     */
    void SetUp() override{
        numbers = generateReverseSortedVector(100);
    }

    void TearDown() override{
        numbers.clear();
    }

    std::vector<int> numbers;
};

TEST_F(ReverseSorted, BubbleSort){
    // Act
    bubbleSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(ReverseSorted, CountSort){
    // Act
    countSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(ReverseSorted, SelectionSort){
    // Act
    selectionSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(ReverseSorted, InsertionSort){
    // Act
    insertionSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(ReverseSorted, MergeSort){
    // Act
    mergeSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}

TEST_F(ReverseSorted, QuickSort){
    // Act
    mergeSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
}
