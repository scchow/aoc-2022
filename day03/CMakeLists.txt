cmake_minimum_required(VERSION 3.16)
project(day03)

# Generate the library day03
add_library(libday03 src/day03a.cpp src/day03b.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For Google Test
enable_testing()
add_subdirectory(tests)

add_executable(day03_bin src/main.cpp)
target_link_libraries(day03_bin libday03)