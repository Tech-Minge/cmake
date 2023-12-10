
add_library(Square STATIC square.cpp)
target_include_directories(Square PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/square_header)

add_library(CubeS SHARED cube.cpp)
target_include_directories(CubeS PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cube_header)
#target_include_directories(Cube PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/square_header)
target_link_libraries(CubeS PRIVATE Square)
