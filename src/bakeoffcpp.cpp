#include <iostream>
#include "bakeoffcpp.h"

void bakeoffcpp(){
    #ifdef NDEBUG
    std::cout << "bakeoffcpp/0.1: Hello World Release!" <<std::endl;
    #else
    std::cout << "bakeoffcpp/0.1: Hello World Debug!" <<std::endl;
    #endif
}
