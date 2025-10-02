#include <iostream>
#define MAXLEN 20
using namespace std;


//TODO
//define arraySum
int arraySum(int *arr, int n) {
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += arr[i];
    }

    return s;
}

int main() {
    int n, i = 0;
    int arr[MAXLEN];

    cin >> n;
    while (i < n) {
        cin >> arr[i++];
    }

    cout << arraySum(arr, n);

    return 0;
}
