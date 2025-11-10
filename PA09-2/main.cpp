#include <iostream>
#include "dynamicArray.hpp"

using namespace std;

int main() {
    //we will fix this file to test your implementation.

    double arr1[3] = {1.2, 3.3, 5.4};
    double arr2[3] = {2.7, 4.8, 7.5};
    DynamicArray<double> *da1 = new DynamicArray<double>(arr1, 3);
    auto da2 = new DynamicArray<double>(arr2, 3);

    da1->append(da2);
    da1->print();

    auto da3 = da1->subseq(3, 2);
    da3->print();

    auto da4 = da1->subseq(3, 5);
    da4->print();

    delete da1;
    delete da2;
    delete da3;
    delete da4;

    return 0;
}
