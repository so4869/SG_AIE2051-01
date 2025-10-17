#include <iostream>

using namespace std;

void MulTable(int);

int main(){

    int n;
    cin >> n;

    MulTable(n);

    return 0;

}

void MulTable(int n) {
    int i = 1;

    while (i < 10) {
        std::cout << n << " times " << i << " is " << n * i << std::endl;
        i += 1;
    }
}