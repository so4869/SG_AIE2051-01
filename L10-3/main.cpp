#include <string>
#include <iostream>

using namespace std;

int main() {
    string str;
    string word1;
    string word2;

    cin >> str >> word1 >> word2;

    //TODO
    unsigned long idx = std::string::npos;
    while ((idx = str.find(word1)) != std::string::npos) {
        str.replace(idx, word1.size(), word2);
    }

    std::cout << str << std::endl;

    return 0;
}
