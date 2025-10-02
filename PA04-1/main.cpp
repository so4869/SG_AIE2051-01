#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[50][50];

    //TODO
    int init_val = 1;
    a[0][0] = init_val;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (j == 0 || j == i - 1) {
                a[i][j] = init_val;
            }
            else{
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;

}