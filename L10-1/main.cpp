#include <string>
#include <iostream>

using namespace std;

int main() {
    //TODO
    std::string str;
    // std::cin >> str;
    std::getline(std::cin, str);

    // std::cout << str.length() << std::endl;
    // std::cout << str.size() << std::endl;
    // std::cout << 'a' << std::endl;
    // std::cout << std::string::npos << std::endl;
    // std::cout << 'a' << std::endl;

    for (int i = 0; i < str.length(); i++) {
        std::cout << str.at(i) << ':' << (int) str.at(i) << ' ';
    }

    return 0;
}
