

add_library(say-hello SHARED hello.cpp hello.hpp)

target_include_directories(say-hello INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
