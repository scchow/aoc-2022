#include <gtest/gtest.h>
#include <string>
#include "day05a.hpp"
#include "day05b.hpp"

TEST(Testday05a, day05Part1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    std::string result = day05a(test_file_path);
    GTEST_ASSERT_EQ("CMZ", result);
}

TEST(Testday05b, day05Part2Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    std::string result = day05b(test_file_path);
    GTEST_ASSERT_EQ("MCD", result);
}
    