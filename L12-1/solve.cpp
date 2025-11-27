#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void TODO ( string & ifname, string & ofname){

    //TODO
    // Read two integers from the input text
    // Then output two elements respectively in the same order

    int s, t;

    std::ifstream inputstream = std::ifstream(ifname);
    inputstream >> s;
    inputstream >> t;
    inputstream.close();

    // std::cout << "s: " << s << ", t: " << t << std::endl;
    std::ofstream outputstream = std::ofstream(ofname);
    outputstream << s << ' ' << t;
    outputstream.close();

    std::cout << s << ' ' << t;
}