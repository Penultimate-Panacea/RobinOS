cmake_minimum_required(VERSION 3.12)
project(RobinOS)

set(CMAKE_CXX_STANDARD 14)

add_executable(RobinOS main.cpp Processor.cpp Processor.hpp Process.cpp Process.hpp)