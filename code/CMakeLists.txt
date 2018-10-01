cmake_minimum_required(VERSION 3.11)
project(RobinOS)

set(CMAKE_CXX_STANDARD 14)

add_executable(RobinOS GlobalVariables.hpp GlobalVariables.cpp main.cpp RoundRobin.cpp RoundRobin.hpp Processor.cpp Processor.hpp
        CodeObject.cpp CodeObject.hpp MemoryManager.cpp MemoryManager.hpp )
