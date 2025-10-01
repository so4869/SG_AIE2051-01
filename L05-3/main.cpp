#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int n;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> array[i];

    Array arr(n, array);
    int l = arr.getLength();
    cout << l << endl;
    arr.print();

    return 0;
}
