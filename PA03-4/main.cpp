#include <iostream>
#define MAXLEN 20
using namespace std;

void printArrayAndLength(int *arr, int n, bool newLine);
int indexOf(int *arr, int n, int tgt);
void insert(int *arr, int &n, int idx, int tgt);
void remove(int *arr, int &n, int idx);


int main(){
    int n;
    int i = 0;
    int arr [MAXLEN];

    cin >> n;
    while(i < n){
        cin >> arr [i++];
    }

    int command, arg1, arg2;

    while (true){

        cin >> command >> arg1 >> arg2;

        if (command == 0){
            break;
        }

        if (command == 1){
            int idx = indexOf(arr, n, arg1);
            std::cout << idx << std::endl;
        }

        if (command == 2){
            insert(arr, n, arg1, arg2);
            printArrayAndLength(arr, n, true);
        }

        if (command == 3){
            remove(arr, n, arg1);
            printArrayAndLength(arr, n, true);
        }

    }

    return 0;
}


void printArrayAndLength(int *arr, int n, bool newLine) {
    std::cout << n << " ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    if (newLine) {
        std::cout << std::endl;
    }
}

int indexOf(int *arr, int n, int tgt) {
    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (tgt == arr[i]) {
            idx = i;
        }
    }

    return idx;
}

void insert(int *arr, int &n, int idx, int tgt) {
    n += 1;

    for (int i = n; idx <= i; i--) {
        arr[i + 1] = arr[i];
    }
    arr[idx] = tgt;
}

void remove(int *arr, int &n, int idx) {
    n -= 1;

    for (int i = idx; i < n; i++) {
        arr[i] = arr[i + 1];
    }
}