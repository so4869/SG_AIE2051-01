#include <iostream>

using namespace std;

int main() {

    const int ROWS = 20;
    const int COLS = 20;

    int array[ROWS][COLS];
    int n, m;

    cin >> n >> m;

    // TODO : Reading the array values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> array[i][j];
        }
    }


    // TODO : Printing the array in the specified format
    for (int i = 0; i < n; i++) {
        std::cout << "row " << i + 1 << ':';

        for (int j = 0; j < m; j++) {
            std::cout << ' ' << j << ':' << array[i][j];
        }

        std::cout << std::endl;
    }


    return 0;
}