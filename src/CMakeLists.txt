
add_executable(${PROJECT_NAME} main.cpp hello_world.cpp)


find_package(Boost MODULE REQUIRED COMPONENTS filesystem regex)

message(STATUS "Boost library: ${Boost_LIBRARIES}")
message(STATUS "Boost include directory: ${Boost_INCLUDE_DIRS}")

#target_link_libraries(${PROJECT_NAME} PRIVATE say-hello)

find_package(Hello MODULE REQUIRED)
message(STATUS "Hello include directory: ${Hello_INCLUDE_DIR}")
message(STATUS "Hello library: ${Hello_LIBRARY}")
#target_include_directories(${PROJECT_NAME} PRIVATE ${Hello_INCLUDE_DIR})

#set(SDL2_DIR "~/SDL2-lib/lib/cmake/SDL2/")
find_package(SDL2 MODULE REQUIRED)
message(STATUS "SDL2 include directory: ${SDL2_INCLUDE_DIR}")
message(STATUS "SDL2 library: ${SDL2_LIBRARIES}")
#target_include_directories(${PROJECT_NAME} PRIVATE ${SDL2_INCLUDE_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE ${SDL2_LIBRARIES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${Hello_LIBRARY})
target_link_libraries(${PROJECT_NAME} PRIVATE cat)
target_link_libraries(${PROJECT_NAME} PRIVATE ${Boost_LIBRARIES})

#target_link_libraries(${PROJECT_NAME} PRIVATE Cube)
#target_include_directories(${PROJECT_NAME} PRIVATE /home/ubuntu/depend-lib/include/cube_include/)
#target_link_libraries(${PROJECT_NAME} PRIVATE /home/ubuntu/depend-lib/lib/cube_lib/libCube.a)
#target_link_libraries(${PROJECT_NAME} PRIVATE /home/ubuntu/depend-lib/lib/cube_lib/libCube.so)
#target_link_libraries(${PROJECT_NAME} PRIVATE /home/ubuntu/depend-lib/lib/cube_lib/libCubeN.so)

# add_library(square SHARED IMPORTED)
# set_target_properties(square PROPERTIES
#     #INTERFACE_INCLUDE_DIRECTORIES /home/ubuntu/depend-lib/include/square_include/
#     IMPORTED_LOCATION /home/ubuntu/depend-lib/lib/square_lib/libSquare.so)

add_library(cube STATIC IMPORTED)
set_target_properties(cube PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES /home/ubuntu/depend-lib/include/cube_include/
    IMPORTED_LOCATION /home/ubuntu/depend-lib/lib/cube_lib/libCube.a)
    #INTERFACE_LINK_LIBRARIES square)

#target_link_directories(cuben INTERFACE /home/ubuntu/depend-lib/lib/square_lib/)
target_link_libraries(cube INTERFACE /home/ubuntu/depend-lib/lib/square_lib/libSquare.so)

target_link_libraries(${PROJECT_NAME} PRIVATE cube)

#target_include_directories(${PROJECT_NAME} PRIVATE /home/ubuntu/depend-lib/include/square_include/)
#target_link_libraries(${PROJECT_NAME} PRIVATE /home/ubuntu/depend-lib/lib/square_lib/libSquare.a)
#target_link_libraries(${PROJECT_NAME} PRIVATE /home/ubuntu/depend-lib/lib/square_lib/libSquare.so)


