cmake_minimum_required(VERSION 3.16)
project(day06)

# Generate the library day06
add_library(libday06 src/day06a.cpp src/day06b.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For Google Test
enable_testing()
add_subdirectory(tests)

add_executable(day06_bin src/main.cpp)
target_link_libraries(day06_bin libday06)