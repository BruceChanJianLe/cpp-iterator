cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(single_loop single_loop.cpp)
add_executable(nested_loop nested_loop.cpp)
add_executable(range_single_loop range_single_loop.cpp)
add_executable(range_nested_loop range_nested_loop.cpp)

add_executable(simultaneous_loop simultaneous_loop.cpp)
