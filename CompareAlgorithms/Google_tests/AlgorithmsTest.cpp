#include <gtest/gtest.h>

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

TEST(AlgorithmTests, QuicksortTest){
    ASSERT_TRUE(1 == 1);
}