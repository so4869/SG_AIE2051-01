#include <iostream>
#include <string>
// #include <regex>

using namespace std;

int main() {
    std::string str;   //string
    std::string uwcs;  //unwnated characters

    std::getline(std::cin, str);
    std::getline(std::cin, uwcs);

    //TODO
    // std::regex uwcs_regex("[" + uwcs + "]");
    // str = std::regex_replace(str, uwcs_regex, "");

    for (int i = 0; i < uwcs.size(); i++) {
        unsigned long idx = 0;
        while ((idx = str.find(uwcs.at(i))) != std::string::npos) {
            str.erase(idx, 1);
        }
    }

    std::cout << str << std::endl;

    return 0;
}