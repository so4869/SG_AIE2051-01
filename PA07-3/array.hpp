#pragma once

#define MAX_LEN 50

using namespace std;

class Array{
protected:
    int arr[MAX_LEN];
public:
    Array(){}
    virtual bool push(int elem) = 0;
    virtual bool pop() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;
};