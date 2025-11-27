#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void TODO ( string & ifname, string & ofname){

    //TODO
    // Read all contexts in a file with name in string ifname.
    // Then output them into a file named with string ofname.

    std::ifstream fis(ifname);
    if (fis.fail()) {
        try {
            fis.close();
        } catch(std::exception &ignore) {}
        return;
    }

    std::ofstream ois(ofname);

    std::string line = "";
    while(!fis.eof()) {
        std::getline(fis, line);
        ois << line << std::endl;
        // std::cout << line << std::endl;
    }

    ois.close();
    fis.close();
}
