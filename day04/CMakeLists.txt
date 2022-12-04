cmake_minimum_required(VERSION 3.16)
project(day04)

# Generate the library day04
add_library(libday04 src/day04a.cpp src/day04b.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For Google Test
enable_testing()
add_subdirectory(tests)

add_executable(day04_bin src/main.cpp)
target_link_libraries(day04_bin libday04)