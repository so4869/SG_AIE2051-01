#pragma once

//TODO
class Array{
private:
    int length;
    int* data;
public:
    Array(int, int*);
    void print();

    int getLength();
    void setLength(int);
};