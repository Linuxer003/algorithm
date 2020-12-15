cmake_minimum_required(VERSION 3.17)
project(cherno)

set(CMAKE_CXX_STANDARD 17)

file(GLOB USER_SRC src/*.cpp)
add_executable(cherno main.cpp ${USER_SRC})