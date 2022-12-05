cmake_minimum_required(VERSION 3.16)
project(day05)

# Generate the library day05
add_library(libday05 src/day05a.cpp src/day05b.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For Google Test
enable_testing()
add_subdirectory(tests)

add_executable(day05_bin src/main.cpp)
target_link_libraries(day05_bin libday05)