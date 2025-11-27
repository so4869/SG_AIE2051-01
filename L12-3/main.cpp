#include <iostream>
#include <cmath>

using namespace std;

float epsilon = 0.0000001;

float divide(const float x, const float y){

    // TODO
    if (abs(y) < epsilon) {
        throw std::invalid_argument("The divisor is too small to divide.");
    }

    return x / y;

}

int main() {
    //TODO
    float x, y;
    std::cin >> x >> y;

    try {
        std::cout << divide(x, y);
    } catch(const std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
        // std::cerr << e.what() << std::endl;
    }

    return 0;
}
