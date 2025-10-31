#include <iostream>

using namespace std;

int main() {
    int data;
    int *tmp;
    int n;

    cin >> n;

    // TODO
    // assign array space to pointer tmp
    tmp = new int[n];


    for (int i = 0; i < n; i++) {
        cin >> data;

        // TODO
        // set value to the array
        *(tmp + i) = data;
    }

    for (int i = 0; i < n; i++) {
        // TODO
        // print each element with space
        std::cout << *(tmp + i) << (i != n - 1 ? " " : "");
    }


    // TODO
    // release array space
    delete[] tmp;

    return 0;
}
