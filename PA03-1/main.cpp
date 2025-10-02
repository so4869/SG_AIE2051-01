#include <iostream>
#include "myswap.h"

using namespace std;

int main(){

    int a,b;

    cin >> a >> b;

    myswap(&a,&b);

    cout << a << " " << b;

    return 0;

}