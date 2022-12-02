cmake_minimum_required(VERSION 3.16)
project(day01)

# Generate the library day01
add_library(libday01 src/day01a.cpp src/day01b.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For Google Test
enable_testing()
add_subdirectory(tests)

add_executable(day01_bin src/main.cpp)
target_link_libraries(day01_bin libday01)