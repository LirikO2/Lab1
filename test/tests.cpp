#include <gtest/gtest.h>
#include "range_bit_count.h"

TEST(RangeBitCountTest, BasicTest) {
    EXPECT_EQ(count_bits_in_range(2, 7), 11);
}

TEST(RangeBitCountTest, SingleNumber) {
    EXPECT_EQ(count_bits_in_range(0, 0), 0);
    EXPECT_EQ(count_bits_in_range(1, 1), 1);
    EXPECT_EQ(count_bits_in_range(3, 3), 2);
}

TEST(RangeBitCountTest, RangeWithZero) {
    EXPECT_EQ(count_bits_in_range(0, 1), 1);
    EXPECT_EQ(count_bits_in_range(0, 2), 2);
}

TEST(RangeBitCountTest, LargeRange) {
    EXPECT_EQ(count_bits_in_range(0, 3), 4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}