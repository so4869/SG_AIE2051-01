#include <iostream>

using namespace std;

void increment (int* x);

int main(){

    int n;
    cin >> n;

    increment( &n );

    cout << n;

    return 0;

}

