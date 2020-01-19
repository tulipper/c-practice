#include "13_8.h"
int main() {
    HasPtr hp1;
    HasPtr hp2("1234");
    hp1 = hp2;
    hp1.print();
    hp2.print();
}