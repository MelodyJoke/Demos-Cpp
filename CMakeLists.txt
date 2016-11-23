cmake_minimum_required(VERSION 3.6)
project(Demos)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp algorithms.h)
add_executable(Demos ${SOURCE_FILES})