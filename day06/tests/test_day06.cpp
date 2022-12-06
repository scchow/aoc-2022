#include <gtest/gtest.h>
#include <string>
#include "day06a.hpp"
#include "day06b.hpp"

TEST(Testday06a, day06Part1Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    GTEST_ASSERT_EQ(7, day06a("mjqjpqmgbljsphdztnvjfqwrcgsmlb"));
    GTEST_ASSERT_EQ(5, day06a("bvwbjplbgvbhsrlpgdmjqwftvncz"));
    GTEST_ASSERT_EQ(6, day06a("nppdvjthqldpwncqszvftbrmjlhg"));
    GTEST_ASSERT_EQ(10, day06a("nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg"));
    GTEST_ASSERT_EQ(11, day06a("zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw"));
}


TEST(Testday06b, day06Part2Test) {
    std::string test_file_path = TEST_RESOURCE_DIR;
    test_file_path += "test.txt";
    GTEST_ASSERT_EQ(19, day06b("mjqjpqmgbljsphdztnvjfqwrcgsmlb"));
    GTEST_ASSERT_EQ(23, day06b("bvwbjplbgvbhsrlpgdmjqwftvncz"));
    GTEST_ASSERT_EQ(23, day06b("nppdvjthqldpwncqszvftbrmjlhg"));
    GTEST_ASSERT_EQ(29, day06b("nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg"));
    GTEST_ASSERT_EQ(26, day06b("zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw"));
}
    