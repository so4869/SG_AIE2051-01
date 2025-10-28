#include <iostream>

using namespace std;

bool IsPrime(int);

int main(){

    int n;
    bool prime;

    cin >> n;

    prime = IsPrime(n);
    std::cout << n << " is " << (prime ? "" : "not ") << "prime.";

    return 0;

}

bool IsPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
