#include <iostream>

int main() {
    bool a;

    // When a is true
    a = true;
    std::cout << "When a is true: " << a << std::endl; // Expected output: 1

    // When a is false
    a = false;
    std::cout << "When a is false: " << a << std::endl; // Expected output: 0

    // When a is 0
    a = 0;
    std::cout << "When a is 0: " << a << std::endl; // Expected output: 0

    // When a is 1
    a = 1;
    std::cout << "When a is 1: " << a << std::endl; // Expected output: 1

    // When a is 82654
    a = 82654;
    std::cout << "When a is 82654: " << a << std::endl; // Expected output: 1

    return 0;
}
