#include <gtest/gtest.h>
#include <string>
#include "day02a.hpp"
#include "day02b.hpp"

TEST(Testday02a, Day02Part1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = day02a(test_file_path);
    GTEST_ASSERT_EQ(15, result);
}

TEST(Testday02b, Day02Part2Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = day02b(test_file_path);
    GTEST_ASSERT_EQ(12, result);
}
