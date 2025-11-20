#pragma once

#include <vector>

using namespace std;

template <class T>
void insertIncreasingOrder (vector<T> &arr, T item){

    typename vector<T>::iterator it;
    // auto it = arr.begin();

    //TODO
    for (it = arr.begin(); it != arr.end(); it++) {
        if (item < *it) {
            break;
        }
    }

    arr.insert(it, item);

    // std::cout << "print iterate" << std::endl;
    // for (it = arr.begin(); it != arr.end(); it++) {
    //     std::cout << *it << ' ';
    // }
    // std::cout << std::endl;

}
