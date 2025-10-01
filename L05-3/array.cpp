#include "array.h"
#include <iostream>

//TODO
Array::Array(int length, int* data): length(length), data(data) {};

void Array::print() {
    std::cout << this->length << " elements: ";

    for (int i = 0; i < length; i++){
        std::cout << this->data[i] << " ";
    }

    std::cout << std::endl;
}

int Array::getLength() {
    return this->length;
}

void Array::setLength(int length) {
    this->length = length;
}