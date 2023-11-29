#include <iostream>
#include "testBin.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(decToBin, test1)
{
    int num = 45;
    int m = decToBin(num);
    EXPECT_EQ(m, 101101);
}
