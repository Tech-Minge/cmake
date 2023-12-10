#include "cube.hpp"
extern int square(int);

int cube(int x) {
    return square(x) * x;
}