#include <iostream>
#include "sort.hpp"

using namespace std;

template<typename T>
void printArray(T *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i == n - 1) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }
}

int main() {
    // I will fix this file to test your implementation.

    int i_arr[5] = {2, 8, 3, 5, 10};
    double d_arr[4] = {3.4, 9.7, 4.5, 6.3};

    findMax<int>(i_arr, 5);
    printArray<int>(i_arr, 5);

    simpleSort<int>(i_arr, 5);
    printArray<int>(i_arr, 5);

    findMax<double>(d_arr, 4);
    printArray<double>(d_arr, 4);

    simpleSort<double>(d_arr, 4);
    printArray<double>(d_arr, 4);

    return 0;
}
