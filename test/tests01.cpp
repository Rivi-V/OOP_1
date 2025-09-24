#include <gtest/gtest.h>
#include "../include/height.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(height(2,1,2)==2);
}

TEST(test_02, test_one_day)
{
    ASSERT_TRUE(height(10,1,9)==1);
}

TEST(test_03, slow_test)
{
    ASSERT_TRUE(height(2,1,10)==10);
}


TEST(test_03, fast_test)
{
    ASSERT_TRUE(height(10,2,25)==4);
}

TEST(test_04, test_one_day)
{
    ASSERT_TRUE(height(10,1,9)==1);
}

TEST(test_05, no_night_test)
{
    ASSERT_TRUE(height(5,0,12)==3);
}

TEST(test_06, day_equals_night_test)
{
    ASSERT_TRUE(height(4,4,20)==0);
}

TEST(test_07, large_test)
{
    ASSERT_TRUE(height(1000,500,100000)==201);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}