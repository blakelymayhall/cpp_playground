cmake_minimum_required(VERSION 3.10)

project(cmake_test1)
include_directories(.)

set(SOURCES
    ./src/Bar.cpp
    ./src/Foo.cpp
)

add_library(cmake_test1 SHARED ${SOURCES})