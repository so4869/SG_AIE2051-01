#include "container.hpp"
#include "myfunc.hpp"
#include "PA.hpp"

template <typename T>
void run() {
    const int sampleN = 10;
    std::vector<T> bucket;

    std::default_random_engine generator;
    std::uniform_real_distribution<float> distribution(0, 9);


    for (int i = 0; i < sampleN; i++) {
        T sampledNumber = (T)distribution(generator);
        insertItem(bucket, sampledNumber);
        printElementsUsingIterator<T>(bucket);
        checkInsertItem(bucket, sampledNumber);
    }




    for (int i = 0; i < sampleN; i++) {
        typename std::vector<T>::iterator min_it = findMinimum(bucket);
        checkFindMinimum(bucket, min_it);
        bucket.erase(min_it);
        printElementsLikeArray<T>(bucket);
    }
}

int main() {
    run<int>();
    return 0;
}