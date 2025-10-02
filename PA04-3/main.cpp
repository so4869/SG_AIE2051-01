#include <iostream>
#include "matmul.h"

using namespace std;

int getInput ( int mat[][COLS], int *rows, int *cols ){

    cin>>*rows>>*cols;

    for(int i=0;i<*rows;i++)
        for(int j=0;j<*cols;j++)
            cin>> mat [i][j];

}

int printMat ( int *mat, int rows, int cols ){

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            cout<< mat [i * (COLS) + j] <<" ";
        cout<<endl;
    }

}

int main(){

    int rowsA, colsA, rowsB, colsB;

    int A[ROWS][COLS], B[ROWS][COLS], C[ROWS][COLS];

    getInput (A, &rowsA, &colsA);
    getInput (B, &rowsB, &colsB);

    matmul(C,A,B, rowsA, colsA, rowsB, colsB);

    //TODO: print matrix C
    printMat(C[0], rowsA, colsB);

    return 0;

}