#pragma once

#include "array.hpp"

class PriorityQueue: public Array{
private:
    int front;
    int rear;
public:
    PriorityQueue(){front=-1; rear=-1;}
    PriorityQueue(int elem);
    bool push(int elem);
    bool pop();
    bool isEmpty();
    void print();
};