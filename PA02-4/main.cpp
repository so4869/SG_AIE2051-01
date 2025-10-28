#include <iostream>

using namespace std;

void PrintArithmetic(int, int, int);
void PrintGeometric(int, int, int);

int main(){

    int n;
    int a, d, r;

    cin >> n >> a >> d >> r;

    PrintArithmetic(n, a, d);
    PrintGeometric(n, a, r);

    return 0;

}


int pow(int n, int p) {
    int r = 1;
    for (int i = 0; i < p; i++) {
        r *= n;
    }

    return r;
}

void PrintArithmetic(int n, int a, int d) {
    for (int i = 1; i <= n; i++) {
        std::cout << a + (i - 1) * d << ' ';
    }

    std::cout << std::endl;
}

void PrintGeometric(int n, int a, int r) {
    for (int i = 1; i <= n; i++) {
        std::cout << a * pow(r, i - 1) << ' ';
    }

    std::cout << std::endl;
}