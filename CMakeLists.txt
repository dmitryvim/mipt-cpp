cmake_minimum_required(VERSION 3.6)
project(mipt-cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(cstring src/cpp/cstring/readstring.cpp)
add_executable(constructor src/cpp/constructor/constructor.cpp)