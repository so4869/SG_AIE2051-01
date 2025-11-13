#include <iostream>
#include <string>
#include <map>

using namespace std;

class Person{
public:
    string name;
    string number;

    // you can delete or use this class
};

int main(){
    //TODO
    std::map<std::string, std::string> contact_map;
    std::string str;
    std::string delimiter = ",:;. ";

    while (true) {
        std::getline(std::cin, str);

        if (str == "end") {
            break;
        }

        for (int i = 0; i < delimiter.size(); i++) {
            unsigned long idx = std::string::npos, latest_idx = std::string::npos;
            while ((idx = str.find(delimiter.at(i))) != std::string::npos) {
                str.erase(idx, 1);
                latest_idx = idx;
            }

            // no this delimiter found.
            if (latest_idx == std::string::npos) {
                continue;
            }
            // std::cout << "test " << delimiter.at(i) << std::endl;

            std::string name = str.substr(0, latest_idx);
            std::string number = str.substr(latest_idx);

            // contact_map.insert({name, number});
            // contact_map.insert(std::pair<std::string, std::string>(name, number));
            contact_map[name] = number;
        }
    }

    std::getline(std::cin, str);
    std::map<std::string, std::string>::iterator iter = contact_map.find(str);

    if (iter == contact_map.end()) {
        std::cout << "no result." << std::endl;
    }
    else {
        std::cout << iter->second << std::endl;
    }

    return 0;

}