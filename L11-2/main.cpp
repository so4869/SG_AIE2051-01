#include <iostream>
#include <map>

using namespace std;

int main(){

    std::string buf;
    std::map<std::string, std::string> name_job_map;

    //read the number of lines
    std::getline(std::cin, buf);
    int n = static_cast<int>(stol(buf));

    for (int i = 0; i < n; i++){
        std::getline(cin, buf);

        unsigned long long space_idx = buf.find(' ');
        if (space_idx != std::string::npos) {
            std::string name = buf.substr(0, space_idx);
            std::string job = buf.substr(space_idx + 1);
            // std::cout << "name: " << name << ", job: " << job << std::endl;
            // name_job_map.insert({name, job});
            name_job_map[name] = job;
        }
    }

    //read the number of names whose job you want to know
    getline(std::cin, buf);
    int m = static_cast<int>(stol(buf));

    for (int i = 0; i < m; i++){
        std::getline(std::cin, buf);

        std::cout << name_job_map[buf] << std::endl;
    }

    return 0;
}