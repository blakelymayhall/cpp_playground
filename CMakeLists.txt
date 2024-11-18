cmake_minimum_required(VERSION 3.10)

project(test_project)

add_subdirectory(../cmake_test1 ../cmake_test1/build)

include_directories(../cmake_test1)

set(SOURCES
    ../main.cpp
)

add_executable(test_project ${SOURCES})

target_link_libraries(test_project PRIVATE cmake_test1)