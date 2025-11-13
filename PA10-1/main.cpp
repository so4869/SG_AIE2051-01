#include <iostream>
#include <string>

using namespace std;

int table[300];

int main(){
    string str;

    std::getline(std::cin, str);

    //TODO
    for (int i = 0; i < 300; i++) {
        table[i] = 0;
    }

    for (int i = 0; i < str.size(); i++) {
        const char ith = str.at(i);
        table[ith] += 1;
    }

    for (int i = 0; i < 300; i++) {
        const int cnt = table[i];
        if (cnt == 0) {
            continue;
        }

        std::cout << '\'' << static_cast<char>(i) << "':" << cnt << std::endl;
    }


    return 0;
}