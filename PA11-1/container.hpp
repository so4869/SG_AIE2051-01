#include <iostream>
#include <vector>
#include <random>

template <typename T>
void printElementsUsingIterator(std::vector<T> &bucket){

    typename std::vector<T>::iterator it = bucket.begin();

    //TODO
    while (it != bucket.end()) {
        std::cout << *it << ' ';
        it++;
    }
    std::cout << std::endl;
}

template <typename T>
void printElementsLikeArray(std::vector<T> &bucket){

    int len = bucket.size();

    //TODO
    for (int i = 0; i < len; i++) {
        std::cout << bucket[i] << ' ';
    }
    std::cout << std::endl;
}