#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void insertElement(int arr[], int &n, int element, int index) {

    std::cout << "asdfasdf: " << n << std::endl;
    std::cout << "asdfasdf: " << &n << std::endl;

    //TODO
    // Step 1: Make space by moving elements
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Step 2: Insert the new element
    arr[index] = element;

    // Step 3: Increase the size of the array
    n++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[MAX_SIZE];
    int n, element, index;

    // Get array size
    // TODO
    std::cin >> n;

    // Get array elements
    // TODO
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Get element to insert
    // TODO
    std::cin >> element;
    std::cin >> index;

    // Print original array
    printArray(arr, n);

    // Perform insertion
    std::cout << "원래 세상이: " << n << std::endl;
    std::cout << "원래 세상이: " << &n << std::endl;
    insertElement(arr, n, element, index);

    // Print updated array
    cout << "Array after insertion: ";
    printArray(arr, n);

    return 0;
}