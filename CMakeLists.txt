cmake_minimum_required(VERSION 3.6)
project(cstring)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES cstring/readstring.cpp)
add_executable(cstring ${SOURCE_FILES})