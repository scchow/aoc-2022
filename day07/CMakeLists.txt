cmake_minimum_required(VERSION 3.16)
project(day07)

# Boost settings
# https://stackoverflow.com/questions/42123509/cmake-finds-boost-but-the-imported-targets-not-available-for-boost-version
set(Boost_NO_SYSTEM_PATHS ON)
set(BOOST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../deps/boost_1_80_0)
message("Boost root at  ${BOOST_ROOT}")
# set(BOOST_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../deps/boost/include)
# set(BOOST_LIBRARYDIR ${CMAKE_CURRENT_SOURCE_DIR}/../deps/boost/lib)
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} )
# SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/../deps/boost)
# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../deps/boost)
set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
find_package(Boost 1.80.0)
# find_package(Boost COMPONENTS graph REQUIRED)

# Generate the library day07
add_library(libday07 src/day07a.cpp src/day07b.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For Google Test
enable_testing()
add_subdirectory(tests)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    add_executable(day07_bin src/main.cpp)
    target_link_libraries(day07_bin libday07 ${Boost_LIBRARIES})
endif()