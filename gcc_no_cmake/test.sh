g++ -o test test.cpp -I /home/ubuntu/depend-lib/include/cube_include/ \
    -L /home/ubuntu/depend-lib/lib/cube_lib/ \
    -lCubeN -Wl,-rpath-link,/home/ubuntu/depend-lib/lib/cube_lib