#include <iostream>

using namespace std;


int main() {
    int data;
    cin >> data;

    // TODO
    // assign memory space to pointer tmp
    int *tmp = new int;
    *tmp = data;

    cout << "pointer x is located at " << &tmp << endl;
    cout << "pointer tmp points to address " << tmp << endl;
    cout << "A variable pointed by pointer tmp has value " << *tmp << endl;

    // TODO
    // release assigned memory space for pointer tmp
    delete tmp;

    return 0;
}
