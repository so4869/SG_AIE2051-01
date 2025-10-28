#include <iostream>

using namespace std;

int TopCorner(int);

int main(){

    int n;
    cin >> n;

    cout << TopCorner(n);

    return 0;

}


int TopCorner(int n) {
    // f, 3, 6, 9
    // 1, 9, 18, 27
    // if (n == 1) {
    //     return 1;
    // }

    int bn = 0;
    int aa = 0;

    for (int i = 1; i < n; i++) {
        int a = i * 3;
        bn = a * 3;
        aa += bn;
    }

    return aa + 1;
}