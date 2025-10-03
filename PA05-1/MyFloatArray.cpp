#include "MyFloatArray.hpp"
#include <iostream>

using namespace std;

FloatArray::FloatArray(int _length, float _array[]) {
    length = _length;
    array = _array;
}

int FloatArray::findElem(float x) {
    //TODO
    for (int i = 0; i < this->length; i++) {
        if (this->array[i] == x) {
            return i;
        }
    }

    return -1;
}

void FloatArray::deleteElem(int index) {
    //TODO
    for (int i = index; i < this->length - 1; i++) {
        this->array[i] = this->array[i + 1];
    }

    this->length = this->length - 1;
}

void FloatArray::insertElem(int index, float x) {
    //TODO
    for (int i = this->length; i > index; i--) {
        this->array[i] = this->array[i - 1];
    }

    this->array[index] = x;
    this->length = this->length + 1;
}

void FloatArray::print() {
    //TODO
    std::cout << this->length << " elements: ";

    for (int i = 0; i < this->length; i++) {
        std::cout << this->array[i] << ' ';
    }

    std::cout << std::endl;
}