cmake_minimum_required(VERSION 3.6)
project(mipt-cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(cstring src/cpp/cstring/readstring.cpp)

add_executable(constructor src/cpp/constructor/constructor.cpp)

add_executable(oop
        src/cpp/oop/oop.cpp
        src/cpp/oop/fraction.cpp
        src/cpp/oop/fraction.h
        src/cpp/oop/Time.cpp
        src/cpp/oop/Time.h)

add_executable(copyconstruct
        src/cpp/copyconstruct/lesson3.cpp
        src/cpp/copyconstruct/int_array.cpp
        src/cpp/copyconstruct/int_array.h)