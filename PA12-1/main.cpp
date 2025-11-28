#include <iostream>

using namespace std;

int main() {
    try {
        while (true) {
            int age;
            std::cout << "Hello, customer. You picked up alcohol. How old are you?" << std::endl;
            std::cin >> age;

            //do proper action with respect to age. The loop must be stopped by throw command.
            //TODO
            if (age <= 19) {
                throw 1;
            } else if (age >= 60) {
                std::cout << "It would not be good for your health. Be careful!" << std::endl;
            } else {
                std::cout << "Enjoy!" << std::endl;
            }

        }
    } catch (int signal) {
        //TODO
        if (signal == 1) {
            std::cout << "You are arrested!" << std::endl;
        }
    }

    return 0;
}
