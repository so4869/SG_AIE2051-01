#include <iostream>

using namespace std;

int BiggestNum(int, int, int);

int main(){

    int a, b, c;
    int biggest;

    cin >> a >> b >> c;

    biggest = BiggestNum(a, b, c);

    cout << biggest;

    return 0;

}

int BiggestNum(int a, int b, int c) {
    // if (a > b && a > c) {
    //     return a;
    // }
    // else if (b > a && b > c) {
    //     return b;
    // }
    // else if (c > a && c > b) {
    //     return c;
    // }

    return a > b ? (a > c ? a : (b > c ? b : c)) : (b > c ? b : (a > c ? a : c));
    // return a > c ? ((a > b ? a : b) : (c > b ? c : b));
}
