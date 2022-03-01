#include <gtest/gtest.h>
#include "../algorithms.h"
#include  "../utils/io-util.h"
#include "../utils/data-service.h"
#include "../utils/logger.h"

class BigNumbers : public ::testing::Test{
protected:
    void SetUp() override{
        if(logger_ == nullptr){
            logger_ = new Logger("../../results/tests/big_numbers_test.txt");
        }

        numbers = generateVector(2000, 0, 4000);
    }

    void TearDown() override{
        numbers.clear();
    }

    std::vector<int> numbers;
    Logger* logger_;
};

TEST_F(BigNumbers, BubbleSort){
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

TEST_F(BigNumbers, CountSort){
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

TEST_F(BigNumbers, SelectionSort){
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

TEST_F(BigNumbers, InsertionSort){
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

TEST_F(BigNumbers, MergeSort){
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

TEST_F(BigNumbers, QuickSort){
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
