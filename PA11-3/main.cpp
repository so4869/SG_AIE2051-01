#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n;
    std::set<std::string> flavors;

    std::cin >> n;
    std::cin.ignore();
    std::string str;

    //TODO: Get ice cream list
    for (int i = 0; i < n; i++) {
        std::getline(std::cin, str);
        flavors.insert(str);
    }


    std::cout << flavors.size() << std::endl;
    //TODO: Print set item
    for (auto & it : flavors) {
        std::cout << it << std::endl;
    }

    return 0;
}
