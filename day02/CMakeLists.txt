cmake_minimum_required(VERSION 3.16)
project(day02)

# Generate the library day02
add_library(libday02 src/day02a.cpp src/day02b.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For Google Test
enable_testing()
add_subdirectory(tests)

add_executable(day02_bin src/main.cpp)
target_link_libraries(day02_bin libday02)