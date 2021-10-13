//
// Created by stani on 13.10.2021.
//
#include "gtest/gtest.h"
#include "../vector_lib/src/vector.h"

TEST(VectorConstructor, DefaultConstructor) {
    lab3::Vector a1;
    const double *c;
    c = a1.getVectArr();
    for (int i = 0; i < a1.getSIZE(); ++i) {
        ASSERT_DOUBLE_EQ(0, *c);
        ++c;
    }
    ASSERT_EQ(0, a1.getCountElm());
}

TEST(VectorConstructor, ElementConstructor) {
    lab3::Vector a1(5.234);
    lab3::Vector a2(1);
    const double *c1;
    const double *c2;
    c1 = a1.getVectArr();
    c2 = a2.getVectArr();
    ASSERT_DOUBLE_EQ(5.234, *c1);
    ASSERT_DOUBLE_EQ(1, *c2);
    ++c1;
    ++c2;
    for (int i = 1; i < a1.getSIZE(); ++i) {
        ASSERT_DOUBLE_EQ(0, *c1);
        ASSERT_DOUBLE_EQ(0, *c2);
        ++c1;
        ++c2;
    }
    ASSERT_EQ(1, a1.getCountElm());
    ASSERT_EQ(1, a2.getCountElm());
}
TEST(VectorConstructor, SizeAndArrConstructor) {
    double elemArr[3] = {3.13, 65.421, 6.6};
    lab3::Vector a1(5, elemArr);
}
