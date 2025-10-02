#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
    int n, m;

    std::cin >> n;
    int *a = static_cast<int *>(malloc(sizeof(int) * n));
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cin >> m;
    int *b = static_cast<int *>(malloc(sizeof(int) * m));
    for(int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    int *c = static_cast<int *>(malloc(sizeof(int) * (n + m)));
    for(int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for(int i = 0; i < m; i++) {
        c[n + i] = b[i];
    }

    // sort
    sort(c, c + n + m);

    std::cout << n + m << " ";

    for(int i = 0; i < n + m; i++) {
        std::cout << c[i] << " ";
    }

    free(a);
    free(b);
    free(c);

    return 0;
}