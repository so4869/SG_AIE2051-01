#include <iostream>

using namespace std;

int main(){

    int x = 0;

    //TODO
    std::cin >> x;

    if (x < 10) {
        std::cout << "x is less than ten." << std::endl;
    }

    std::cout << "x is " << (x & 1 ? "odd" : "even") << "." << std::endl;

    if (x % 7 == 0 && x > 100) {
        std::cout << "x is a multiple of 7 greater than 100." << std::endl;
    }

    return 0;

}