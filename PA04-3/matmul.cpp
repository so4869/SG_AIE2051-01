#include <iostream>
#include "matmul.h"
#include "stdlib.h"

int inner_product(int* vec1, int* vec2, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *(vec1 + i) * *(vec2 + i);
    }

    return sum;
}

void matmul(int dst[][COLS], int mat1[][COLS], int mat2[][COLS], int rows1, int cols1, int rows2, int cols2){

    // rows1 by cols2
    for (int i = 0; i < rows1; i++) {
        int* vec1 = mat1[i];
        int* vec2 = static_cast<int*>(malloc(sizeof(int) * rows2));

        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < rows2; k++) {
                *(vec2 + k) = mat2[k][j];
            }

            // for (int j = 0; j < cols1; j++) {
            //     std::cout << vec1[j] << ' ';
            // }
            // std::cout << std::endl;
            // for (int j = 0; j < rows2; j++) {
            //     std::cout << vec2[j] << ' ';
            // }
            // std::cout << std::endl;

            int inner = inner_product(vec1, vec2, rows2);
            // std::cout << "i: " << i << ", j: " << j << std::endl;
            // std::cout << "inner_product " << inner << std::endl;
            dst[i][j] = inner;
        }
    }
}