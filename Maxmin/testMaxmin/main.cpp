#include "testMax.h"
#include "gtest/gtest.h"

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(max, test1)
{
    int M[] = {9, 2, 10, 12, -2};
    int max_el = M[0];
    int max_index = 0;
    int m = max(M, max_el, max_index);
    EXPECT_EQ(m, 12);
};

TEST(lastNgtv, test2)
{
    int M[] = {9, 2, 10, 12, -2};
    int last_ngtv = M[0];
    int lastNgtv_index = 0;
    int m = min(M, last_ngtv, lastNgtv_index);
    EXPECT_EQ(m, -2);
}

TEST(SWAP,test3)
{
    int mass = 5;
    int M[] = {9, 2, 10, 12, -2};
    int size[] = {9 , 2, 10, -2, 12};
    int j;
    int max_el = M[0];
    int max_index = 0;
    int last_ngtv = M[0];
    int lastNgtv_index = 0;
    swap(M,j, mass, max_el, last_ngtv, max_index, lastNgtv_index);
    EXPECT_EQ(memcmp (M, size, mass),0);
}

