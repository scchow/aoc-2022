#include <gtest/gtest.h>
#include <string>
#include "day04a.hpp"
#include "day04b.hpp"

TEST(Testday04a, day04Part1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = day04a(test_file_path);
    GTEST_ASSERT_EQ(2, result);
}

TEST(Testday04b, day04Part2Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = day04b(test_file_path);
    GTEST_ASSERT_EQ(4, result);
}
    