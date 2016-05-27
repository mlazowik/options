cmake_minimum_required(VERSION 2.8)
project(options)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

add_subdirectory(${PROJECT_SOURCE_DIR}/lib/string-utils)

set(SOURCE_FILES
        options/boolean_parser.cpp
        options/boolean_parser.h
        options/number_parser.cpp
        options/number_parser.h
        options/options.cpp
        options/options.h
        options/parser.h
        options/string_parser.cpp
        options/string_parser.h)

add_library(options ${SOURCE_FILES})

target_include_directories(options PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_dependencies(options string_utils)

target_link_libraries(options string_utils)