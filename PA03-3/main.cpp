#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    int size = n + 1;
    bool prime[size];

    //TODO: Initialize all elements of the 'prime' array to 'true'
    for(int i = 0; i < size;  i++) {
        prime[i] = true;
    }

    prime[0] = prime[1] = false;

    //TODO: Implement the Sieve of Eratosthenes.
    for(int i = 1; i < size; i++) {
        if (!prime[i]) {
            continue;
        }

        for (int j = i * 2; j < size; j += i) {
            prime[j] = false;
        }
    }

    //print all elements of 'prime' array.
    for(int i = 0; i <= n; i++) {
        if(prime[i]) {
            cout << i << " ";
        }
    }

    return 0;

}