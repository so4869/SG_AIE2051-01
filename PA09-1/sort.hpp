#include "iostream"

template<typename T>
void findMax(T *arr, int n) {
    if (n <= 0) {
        return;
    }

    T max = arr[0];
    int max_idx = 0;

    // std::cout << "debug: " << max << std::endl;

    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            max_idx = i;
        }
    }

    T t = arr[0];
    arr[0] = max;
    arr[max_idx] = t;
}

template<typename T>
void simpleSort(T *arr, int n) {
    if (n <= 0) {
        return;
    }

    //TODO
    for (int i = 0; i < n; i++) {
        findMax(arr + i, n - i);
    }
}
