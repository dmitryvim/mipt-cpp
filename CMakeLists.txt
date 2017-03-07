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
        src/cpp/copyconstruct/int_array.h
        src/cpp/copyconstruct/float_array.cpp
        src/cpp/copyconstruct/float_array.h)

add_executable(selfstring
        src/cpp/selfstring/main.cpp
        src/cpp/selfstring/string.h
        src/cpp/selfstring/string.cpp)

add_executable(matrix
        src/cpp/matrix/main.cpp
        src/cpp/matrix/Matrix.h
        src/cpp/matrix/Matrix.cpp)

add_executable(extend
        src/cpp/collection/main.cpp
        src/cpp/collection/List.cpp
        src/cpp/collection/List.h)