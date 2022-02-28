#include <gtest/gtest.h>
#include "../algorithms.h"
#include  "../utils/io-util.h"
#include "../utils/data-service.h"
#include "../utils/logger.h"

class SmallNumbers : public ::testing::Test{
protected:
    /*
     * Before each test, add 50 small numbers (from 0 to 5).
     */
    void SetUp() override{
        if(logger_ == nullptr){
            logger_ = new Logger("../../results/tests/small_numbers_test.txt");
        }

        numbers = generateVector(50, 0, 5);
    }

    void TearDown() override{
        numbers.clear();
    }

    std::vector<int> numbers;
    Logger* logger_;
};

TEST_F(SmallNumbers, BubbleSort){
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

TEST_F(SmallNumbers, CountSort){
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

TEST_F(SmallNumbers, SelectionSort){
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

TEST_F(SmallNumbers, InsertionSort){
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

TEST_F(SmallNumbers, MergeSort){
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

TEST_F(SmallNumbers, QuickSort){
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
