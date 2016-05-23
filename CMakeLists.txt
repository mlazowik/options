cmake_minimum_required(VERSION 2.8)
project(options)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/boolean_parser.cpp
    src/boolean_parser.h
    src/number_parser.cpp
    src/number_parser.h
    src/options.cpp
    src/options.h
    src/parser.h
    src/string_parser.cpp
    src/string_parser.h)

add_library(options ${SOURCE_FILES})

target_include_directories(options PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})