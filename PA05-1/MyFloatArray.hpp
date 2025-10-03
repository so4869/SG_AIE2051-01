#pragma once

#define MAX_LEN 100

class FloatArray{
private:
    float* array;
    int length;
public:
    //TODO: please implement the definitions of following functions.
    FloatArray(int, float []);
    int findElem(float x);
    void deleteElem(int index);
    void insertElem(int index, float x);
    //
    void print();

};