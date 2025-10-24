#pragma once

#include "array.hpp"

class Stack: public Array{
private:
    int top;
public:
    Stack(){top=-1;}
    Stack(int elem);
    bool push(int elem);
    bool pop();
    bool isEmpty();
    void print();
};