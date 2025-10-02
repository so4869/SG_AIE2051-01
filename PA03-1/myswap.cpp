//TODO
#include <iostream>

void myswap(int* a, int* b) {

    // std::cout << a << std::endl;
    // std::cout << b << std::endl;

    // int *t = a;
    // a = b;
    // b = t;

    // std::cout << a << std::endl;
    // std::cout << b << std::endl;

    int t = *a;
    *a = *b;
    *b = t;
}