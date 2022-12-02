#include <gtest/gtest.h>
#include <string>
#include "day01a.hpp"
#include "day01b.hpp"

TEST(Testday01a, Day01Part1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    auto result = day01a(test_file_path);
    GTEST_ASSERT_EQ(4, result.first);
    GTEST_ASSERT_EQ(33, result.second);
}

TEST(Testday01b, Day01Part2Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    auto result = day01b(test_file_path);
    GTEST_ASSERT_EQ(72, result);
}