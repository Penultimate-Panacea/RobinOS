cmake_minimum_required(VERSION 3.11)
project(RobinOS)

set(CMAKE_CXX_STANDARD 14)

add_executable(RobinOS main.cpp Processor.cpp Processor.hpp Process.cpp Process.hpp CodeObject.cpp CodeObject.hpp
        MemoryManager.cpp MemoryManager.hpp Strand.cpp Strand.hpp Scheduler.cpp Scheduler.h RoundRobinSelect.hpp RoundRobin.cpp RoundRobin.hpp)
