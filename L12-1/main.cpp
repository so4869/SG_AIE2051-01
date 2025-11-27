#include <fstream>
#include "checker.hpp"

using namespace std;

void TODO ( string & ifname, string & ofname);

int main(){

    string input_fname = "input.txt";
    string output_fname = "output.txt";

    TODO ( input_fname, output_fname );
    checkAnswer( input_fname, output_fname );

    return 0;
}
