#include "hello_world.hpp"
#include <iostream>

void hello_world::sayHelloWorld() {
    hello::sayHello();
    std::cout << "This is World!" << std::endl;
}
