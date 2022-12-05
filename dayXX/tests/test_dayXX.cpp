#include <gtest/gtest.h>
#include <string>
#include "dayXXa.hpp"
#include "dayXXb.hpp"

TEST(TestdayXXa, dayXXPart1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    int result = dayXXa(test_file_path);
    GTEST_ASSERT_EQ(157, result);
}

// TEST(TestdayXXb, dayXXPart2Test) {
//     std::string test_file_path = TEST_RESOURCE_DIR;
//     test_file_path += "test.txt";
//     int result = dayXXb(test_file_path);
//     GTEST_ASSERT_EQ(70, result);
// }
    