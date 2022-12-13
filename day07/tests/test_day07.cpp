#include <gtest/gtest.h>
#include <string>
#include "day07a.hpp"
#include "day07b.hpp"

TEST(Testday07a, day07Part1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = day07a(test_file_path);
    GTEST_ASSERT_EQ(157, result);
}

// TEST(Testday07b, day07Part2Test) {
//     std::string test_file_path = TEST_RESOURCE_DIR;
//     test_file_path += "test.txt";
//     int result = day07b(test_file_path);
//     GTEST_ASSERT_EQ(70, result);
// }
    