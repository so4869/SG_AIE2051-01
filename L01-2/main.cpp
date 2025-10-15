#include <iostream>
#include "increment.hpp"

using namespace std;


int main(){

    int x;

    cin >> x;

    x = increment (x);

    cout << x;

    return 0;

}