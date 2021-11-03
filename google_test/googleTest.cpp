//
// Created by stani on 13.10.2021.
//
#include "gtest/gtest.h"
#include "../vector_lib/src/vector.h"

TEST(VectorConstructor, DefaultConstructor) {
    lab3::Vector a1;
    ASSERT_EQ(0, a1.getCurrSize());
}

TEST(VectorConstructor, ElementConstructor) {
    lab3::Vector a1(5.234);
    lab3::Vector a2(1);
    ASSERT_DOUBLE_EQ(5.234, a1[0]);
    ASSERT_EQ(1, a1.getCurrSize());
    ASSERT_EQ(1, a2.getCurrSize());
}
TEST(VectorConstructor, SizeAndArrConstructor) {
    double elemArr[3] = {3.13, 65.421, 6.6};
    lab3::Vector a1(3, elemArr);
    ASSERT_EQ(3, a1.getCurrSize());
    for (int i = 0; i < a1.getCurrSize(); ++i) {
        ASSERT_DOUBLE_EQ(elemArr[i], a1[i]);
    }
}
TEST(VectorConstructor, ConstConstructors) {
    const lab3::Vector a1;
    ASSERT_EQ(0, a1.getCurrSize());

    const lab3::Vector a2(5.43);
    ASSERT_EQ(1, a2.getCurrSize());
    ASSERT_DOUBLE_EQ(5.43, a2[0]);

    double elemArr[4] = {3.2, 23.432, 2.34, 5.67};
    const lab3::Vector a3(4, elemArr);
    ASSERT_EQ(4, a3.getCurrSize());
    for (int i = 0; i < a3.getCurrSize(); ++i)
        ASSERT_DOUBLE_EQ(elemArr[i], a3[i]);
}
TEST(Getter, Allgetters) {
    double elemArr[3] = {3.13, 65.421, 6.6};
    lab3::Vector a1(3, elemArr);
    ASSERT_EQ(3, a1.getCurrSize());

    const double *arrPtr = a1.getVectArr();
    for (int i = 0; i < a1.getCurrSize(); ++i) {
        ASSERT_DOUBLE_EQ(elemArr[i], arrPtr[i]);
        ASSERT_DOUBLE_EQ(elemArr[i], a1.getEl(i));
    }
}
TEST(Arithmetic, ArithmeticsWithOperands) {
    double elemArr1[3] = {3.13, 65.421, 6.6};
    lab3::Vector a(3, elemArr1);
    double elemArr2[4] = {0.43, 42.3, 1.323, 7.5};
    lab3::Vector b(4, elemArr2);

    double arrAsumB[] = {3.56, 107.721, 7.923, 7.5};
    double arrAsubB[] = {2.7, 23.121, 5.277, -7.5};
    double arrBsubA[] = {-2.7, -23.121, -5.277, 7.5};
    double arrAmultB[] = {1.3459, 2767.3083, 8.7318, 0};

    lab3::Vector res = a + b;
    for (int i = 0; i < 4; ++i)
        ASSERT_DOUBLE_EQ(arrAsumB[i], res[i]);
    res = a - b;
    for (int i = 0; i < 4; ++i)
        ASSERT_DOUBLE_EQ(arrAsubB[i], res[i]);
    res = b - a;
    for (int i = 0; i < 4; ++i)
        ASSERT_DOUBLE_EQ(arrBsubA[i], res[i]);
    res = a * b;
    for (int i = 0; i < 4; ++i)
        ASSERT_DOUBLE_EQ(arrAmultB[i], res[i]);

    ASSERT_DOUBLE_EQ(a.norm(), 65.421);
    ASSERT_DOUBLE_EQ(b.norm(), 42.3);
    a.setEl(0, 123.123);
    ASSERT_DOUBLE_EQ(123.123, a.norm());
}
TEST(Exceptions, Allexceptions) {
    double elemArr1[3] = {3.13, 65.421, 6.6};
//    EXPECT_ANY_THROW(lab3::Vector a(4, elemArr1));

    double elemArr2[20] = {1, 1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    lab3::Vector a1(20, elemArr2);
//    EXPECT_ANY_THROW(a1.put(3.3));

    EXPECT_ANY_THROW(a1.getEl(20));

    EXPECT_ANY_THROW(a1.setEl(20, 3.4));

    EXPECT_ANY_THROW(a1(20, 2.12));
//    EXPECT_ANY_THROW(a1[20]);
}