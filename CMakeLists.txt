
cmake_minimum_required(VERSION 3.17)
project(hello_world)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
message(STATUS "CMake module path: ${CMAKE_MODULE_PATH}")

list(APPEND CMAKE_PREFIX_PATH ~/SDL2-lib/)
message(STATUS "CMake prefix path: ${CMAKE_PREFIX_PATH}")

#add_subdirectory(hello-util)
#add_subdirectory(dependency)
add_subdirectory(header-only)
add_subdirectory(src)

