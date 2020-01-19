#include "13_5.h"

int main() {
    HasPtr hp1;
    HasPtr hp2("1234");
    HasPtr hp3(hp2);
    HasPtr hp4 = hp3;
    std::cout << "hp1" << *(hp1.ps) << std::endl;
    std::cout << "hp2" << *hp2.ps << std::endl;
    std::cout << "hp3" << *hp3.ps << std::endl;
    std::cout << "hp4" << *hp4.ps << std::endl;
}