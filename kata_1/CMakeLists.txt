cmake_minimum_required(VERSION 3.22.2)

project(course_task_1 VERSION 0.0.1)

set (CMAKE_CXX_STANDARD 20)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_library(no_space no_space.cpp)

add_executable(remove_string_spaces main.cpp)

target_link_libraries(remove_string_spaces no_space)