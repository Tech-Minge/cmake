
#include "hello_world.hpp"
#include "cat.hpp"
#include <boost/filesystem.hpp>
#include "SDL.h"
#include "cube.hpp"


int main() {
    hello_world::sayHelloWorld();
    Cat c("Alice");
    c.Greet();
    boost::filesystem::path path_to_dir("/home/ubuntu/learn_cmake");  
    std::cout << boost::filesystem::is_directory(path_to_dir) << std::endl;
    SDL_Init( SDL_INIT_VIDEO );
    std::cout << cube(4) << std::endl;
}
