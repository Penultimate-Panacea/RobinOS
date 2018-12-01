cmake_minimum_required(VERSION 3.12)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled3 main.cpp)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/testJobs.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
