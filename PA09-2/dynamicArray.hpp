#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
class DynamicArray {
private:
    T *ptr;
    int length;

public:
    DynamicArray(T arr[], int len) {
        ptr = new T[len];
        length = len;
        for (int i = 0; i < len; i++) {
            ptr[i] = arr[i];
        }
    }

    void print() {
        for (int i = 0; i < length; i++) {
            cout << ptr[i];
            if (i == length - 1) {
                cout << endl;
            } else {
                cout << ", ";
            }
        }
    }

    ~DynamicArray() {
        delete[] ptr;
    }

    //TODO
    int get_length() {
        return this->length;
    }

    T *get_ptr_data() {
        T *t = new T[this->length];

        copy_n(this->ptr, this->length, t);

        return t;
    }

    void append(DynamicArray *da);

    DynamicArray *subseq(int idx, int n);
};

template<typename T>
void DynamicArray<T>::append(DynamicArray *da) {
    //TODO
    int new_len = this->get_length() + da->get_length();
    T *t_ptr = new T[new_len];

    copy_n(this->ptr, this->get_length(), t_ptr);
    auto t = da->get_ptr_data();
    copy_n(t, da->get_length(), t_ptr + this->get_length());

    this->length = new_len;

    this->~DynamicArray();
    delete[] t;
    this->ptr = t_ptr;
}

template<typename T>
DynamicArray<T> *DynamicArray<T>::subseq(int idx, int n) {
    //TODO
    // std::cout << "idx: " << idx << " n: " << n << std::endl;
    n = n > this->length - idx ? this->length - idx : n;
    DynamicArray<T> *n_da = new DynamicArray<T>(this->ptr + idx, n);

    return n_da;
}
