#include "elemTest.h"
#include "gtest/gtest.h"
#include <string.h>

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(occurElem, test1)
{
    constexpr int a = 10;
                    //0   1  2  3   4  5  6  7  8  9
    int Mesto_A[a] = {5, -7, 4, 3, -5, 7, 2, 6, 1, 0};
    constexpr int b = 5;
    int Mesto_B[b] = {5, 6, 7, -5, 3};
    constexpr int c = 5;
    int Mesto_C[c] = {};
    int Mesto_V[] = {1, 2, 6, 8, 9};
    int m = FindInd(Mesto_A, Mesto_B, Mesto_C, a, b);

//    EXPECT_EQ(m, 5);
    EXPECT_EQ(memcmp(Mesto_C, Mesto_V, m *sizeof(int)), 0);
};
