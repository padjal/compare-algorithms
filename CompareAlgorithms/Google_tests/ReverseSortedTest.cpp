#include <gtest/gtest.h>
#include "../algorithms.h"
#include "../utils/data-service.h"
#include "../utils/io-util.h"
#include "../utils/logger.h"

class ReverseSorted : public ::testing::Test{
protected:
    /*
     * Before each test, add numbers from 100 to 1 (reverse order).
     */
    void SetUp() override{
        if(logger_ == nullptr){
           logger_ = new Logger("../../results/tests/reverse_sorted_test.txt");
        }

        numbers = generateReverseSortedVector(100);
    }

    void TearDown() override{
        numbers.clear();
    }

    std::vector<int> numbers;
    Logger* logger_;
};

TEST_F(ReverseSorted, BubbleSort){
    logger_->log("===== BUBBLE SORT =====");
    logger_->log("Initial array: ");
    logger_->log(numbers);

    // Act
    bubbleSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
    logger_->log("Sorted array: ");
    logger_->log(numbers);
}

TEST_F(ReverseSorted, CountSort){
    logger_->log("===== COUNT SORT =====");
    logger_->log("Initial array: ");
    logger_->log(numbers);

    // Act
    countSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
    logger_->log("Sorted array: ");
    logger_->log(numbers);
}

TEST_F(ReverseSorted, SelectionSort){
    logger_->log("===== SELECTION SORT =====");
    logger_->log("Initial array: ");
    logger_->log(numbers);

    // Act
    selectionSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
    logger_->log("Sorted array: ");
    logger_->log(numbers);
}

TEST_F(ReverseSorted, InsertionSort){
    logger_->log("===== INSERTION SORT =====");
    logger_->log("Initial array: ");
    logger_->log(numbers);

    // Act
    insertionSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
    logger_->log("Sorted array: ");
    logger_->log(numbers);
}

TEST_F(ReverseSorted, MergeSort){
    logger_->log("===== MERGE SORT =====");
    logger_->log("Initial array: ");
    logger_->log(numbers);

    // Act
    mergeSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
    logger_->log("Sorted array: ");
    logger_->log(numbers);
}

TEST_F(ReverseSorted, QuickSort){
    logger_->log("===== QUICK SORT =====");
    logger_->log("Initial array: ");
    logger_->log(numbers);

    // Act
    mergeSort(numbers);

    bool result = isSorted(numbers);

    // Assert
    EXPECT_TRUE(result);

    printVector(numbers);
    logger_->log("Sorted array: ");
    logger_->log(numbers);
}
