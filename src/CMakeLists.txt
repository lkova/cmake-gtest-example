cmake_minimum_required(VERSION 3.8)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing() # must have for the tests

set(Headers 
    Example.hpp
)

set(Sources
    Example.cpp
)

add_library(${This} ${Sources} ${Headers}) # libraries linked with everything
