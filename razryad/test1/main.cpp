#include "gtest/gtest.h"
#include "razryad.h"

#include <stdio.h>


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(razr, test1)
{
    int number = 65789;
    int sortnumb = 0;
    int powerOfTen = 1;
    int originalNumber = number;
    int m = func(number, sortnumb, powerOfTen, originalNumber);
    EXPECT_EQ(m, 98765);

};
