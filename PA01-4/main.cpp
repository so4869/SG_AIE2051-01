#include <iostream>
#include "math.hpp"

using namespace std;

int main(){

    int a,b;

    cin >> a >> b;

    cout << "a+b = " << add(a, b) << endl;
    cout << "a-b = " << subtract(a, b) << endl;
    cout << "a*b = " << multiply(a, b) << endl;
    cout << "a/b = " << divide(a, b) << endl;
    cout << "a modulo b = " << modulo(a, b) <<endl;

    return 0;
}