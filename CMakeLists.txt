cmake_minimum_required(VERSION 3.17)
project(cherno)

set(CMAKE_CXX_STANDARD 17)

add_executable(cherno main.cpp src/leetcode/reverseMatric.cpp src/leetcode/reverseMatric.h src/leetcode/minestDiffTime.cpp src/leetcode/minestDiffTime.h src/algorithm/DFS.cpp src/algorithm/DFS.h src/leetcode/ArrayBroke2Fibonacci.cpp src/leetcode/ArrayBroke2Fibonacci.h)