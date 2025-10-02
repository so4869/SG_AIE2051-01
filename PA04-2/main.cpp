#include <iostream>

using namespace std;

int find_max_value(int* arr, int n, int init_max) {
    int max = init_max;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    const int sz = 100;
    int n, m;
    cin >> n >> m;

    int scores[sz][sz];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> scores[i][j];
        }
    }

    bool alive_row[sz] = {true,};
    for (int i = 0; i < n; i++) {
        alive_row[i] = true;
    }

    int last_row = -1;

    for(int j = 0; j < m; j++) {
        // std::cout << j << std::endl;
        int col_scores[sz] = {0,};

        for(int i = 0; i < n; i++) {
            if (!alive_row[i]) {
                continue;
            }

            int score = scores[i][j];
            col_scores[i] = score;
        }

        int col_max_score = find_max_value(col_scores, n, 0);
        // std::cout << "max: " << col_max_score << std::endl;

        for(int i = 0, k = 0; i < n; i++) {
            int score = scores[i][j];
            alive_row[i] = alive_row[i] && score == col_max_score;
        }

        bool only_one_left = true;
        bool twice = false;

        // std::cout << "Alive rows are ";
        for (int i = 0; i < n; i++) {
            if (twice && alive_row[i]) {
                only_one_left = false;
                break;
            }
            if (!twice && alive_row[i]) {
                twice = true;
                last_row = i;
            }
            // std::cout << alive_row[i] << ' ';
        }
        // std::cout << std::endl;

        if (only_one_left) {
            break;
        }
    }

    std::cout << last_row + 1 << ' ';
    for(int j = 0; j < m; j++) {
        std::cout << scores[last_row][j] << ' ';
    }

    return 0;
}