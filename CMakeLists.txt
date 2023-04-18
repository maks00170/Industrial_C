cmake_minimum_required(VERSION 3.16)

project("hw1_project")

set(
    CMAKE_CXX_STANDARD 17
)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wpedantic -Werror)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(libsrc/raiiaction)
add_subdirectory(projects/main)
add_subdirectory(testsuite/libsrc/raiiaction)
