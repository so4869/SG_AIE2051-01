#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    std::string str;
    std::getline(std::cin, str);

    //TODO
    std::string int_symbol = "int:";
    std::string float_symbol = "float:";

    if (str.find(int_symbol) == 0) {
        std::cout << atoi(str.substr(int_symbol.size()).c_str());
    }
    else if (str.find(float_symbol) == 0) {
        std::cout << atof(str.substr(float_symbol.size()).c_str());
    }

    std::cout << std::endl;

    return 0;
}