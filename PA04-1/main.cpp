#include <iostream>

using namespace std;

int main() {

    const int ROWS = 4;
    const int COLS = 4;
    float exam[ROWS][COLS] = {{4.3, 1.0, 4.3, 4.0},
                            {3.3, 3.0, 3.7, 2.7},
                            {2.3, 2.7, 3.7, 4.3},
                            {4.3, 3.7, 3.0, 2.7}
    };

    char vtype;
    int index;

    cin >> vtype >> index;

    float sum = 0;

    if (vtype == 'R') {
        for (int i = 0; i < COLS; i++) {
            sum += exam[index][i];
        }
    }
    else if (vtype == 'C') {
        for (int i = 0; i < ROWS; i++) {
            sum += exam[i][index];
        }
    }

    //TODO
    std::cout << (vtype == 'R' ? sum / COLS : (vtype == 'C' ? sum / ROWS : 0));


    return 0;
}