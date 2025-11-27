#include <cstdio>
#include <fstream>
#include "checker.hpp"

using namespace std;

void TODO ( string & ifname, string & ofname);

int main(){

    string input_fname = "/Volumes/d/sandbox/SG_AIE2051-01/L12-2/input.txt";
    string output_fname = "/Volumes/d/sandbox/SG_AIE2051-01/L12-2/output.txt";

    TODO ( input_fname, output_fname );
    checkAnswer( input_fname, output_fname );

    return 0;
}