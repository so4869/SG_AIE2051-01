#include "stack.hpp"
#include <iostream>

using namespace std;


Stack::Stack(int elem){
    this->top = -1;
    this->push(elem);
}

bool Stack::push(int elem){
    // validation
    if (MAX_LEN <= this->top + 1) {
        return false;
    }

    this->arr[++this->top] = elem;

    return true;
}

bool Stack::pop(){
    // validation
    if (this->isEmpty()) {
        return false;
    }

    this->arr[this->top--];

    return true;
}

bool Stack::isEmpty(){
    return this->top == -1;
}

void Stack::print(){
    for (int i = 0; i <= this->top; i++) {
        std::cout << this->arr[i] << ' ';
    }
    std::cout << std::endl;
}