#include <iostream>

using namespace std;

//TODO: Implement 'get_n_print_arr' function.
void get_n_print_arr(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << "array[" << i << "] = " << arr[i] << std::endl;
    }
}

int main(){
    const int LEN = 30;
    int A[LEN] = {};

    int len = 0;
    std::cin >> len;

    //TODO: read array elements
    for (int i = 0; i < len; i++) {
        std::cin >> A[i];
    }

    //TODO: call 'get_n_print_arr' functions three times.
    get_n_print_arr(A, len);
    get_n_print_arr(A, 1);
    get_n_print_arr(A, len / 2);

    return 0;
}