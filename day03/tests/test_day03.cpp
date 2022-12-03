#include <gtest/gtest.h>
#include <string>
#include "day03a.hpp"
#include "day03b.hpp"

TEST(Testday03a, Day03Part1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = day03a(test_file_path);
    GTEST_ASSERT_EQ(157, result);
}

TEST(Testday03b, Day03Part2Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = day03b(test_file_path);
    GTEST_ASSERT_EQ(70, result);
}
    