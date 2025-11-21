#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    std::string line;
    std::getline(std::cin, line);
    const auto sublength = stol(line);


    std::getline(cin, line);
    std::map<std::string, int> dict;

    const auto len = line.size();

    for (int i = 0; i <= len - sublength; i++) {
        //TODO: add a n-substring in map container.
        dict[line.substr(i, sublength)] += 1;
    }

    //TODO: print map items.
    for (auto & it : dict) {
        std::cout << it.first << ' ' << it.second << std::endl;
    }


    return 0;
}
