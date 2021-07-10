cmake_minimum_required(VERSION 3.8)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest)
add_subdirectory(src)

enable_testing() # must have for the tests
add_subdirectory(test)