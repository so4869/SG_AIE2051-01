#include <vector>
#include <limits>

template <class T>
void insertItem( std::vector<T> &arr, T item ){
    //TODO
    arr.push_back(item);
    // arr.insert(arr.end(), item);
}

template <class T>
typename std::vector<T>::iterator findMinimum( std::vector<T> &arr ){

    typename std::vector<T>::iterator min_it;
    typename std::vector<T>::iterator it = arr.begin();

    //TODO
    min_it = it;
    T min_val = *min_it;
    while (it != arr.end()) {
        if (*it < min_val) {
            min_it = it;
            min_val = *it;
        }

        it++;
    }


    return min_it;
}