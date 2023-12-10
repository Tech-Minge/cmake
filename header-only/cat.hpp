#pragma once

#include <iostream>
#include <string>

class Cat {
public:
    Cat(std::string name): name_(name) {}
    void Greet() {
        std::cout << "Hello guys, my name is " << name_ <<  "!" << std::endl;
    }
private:
    std::string name_;
};
