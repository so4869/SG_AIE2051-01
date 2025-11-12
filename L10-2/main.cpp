#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 3;
    std::string arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    sort<std::string[]>(arr, arr + n);

    std::string new_str = "";
    for (int i = 0; i < 3; i++) {
        new_str += arr[i];
    }

    std::cout << new_str << std::endl;


    return 0;
}
