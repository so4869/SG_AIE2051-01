#include "array.hpp"
#include "priorityQueue.hpp"
#include "stack.hpp"

#include <iostream>

using namespace std;

void pushArray(Array ** arr, int elem){
    for(int i=0; arr[i] != NULL; i++){
        arr[i]->push(elem);
    }
}

void popArray(Array ** arr){
    for(int i=0; arr[i] != NULL; i++){

        if(!arr[i]->pop())
            cout << "Array is Empty" << endl;
    }
}

void emptyArray(Array ** arr){
    for(int i=0; arr[i] != NULL; i++){
        if(arr[i]->isEmpty())
            cout << i << "-th Array is empty" << endl;
        else
            cout << i << "-th Array is not empty" << endl;
    }
}

void printArray(Array **arr){
    for(int i=0; arr[i] != NULL; i++){
        arr[i]->print();
    }
}


int main(){
    PriorityQueue q;
    Stack s(0);
    Array* arr[3];

    arr[0] = &q;
    arr[1] = &s;
    arr[2] = NULL;

    emptyArray(arr);
    popArray(arr);

    pushArray(arr, 2);
    cout << "After push 2" << endl;
    printArray(arr);

    pushArray(arr, 5);
    cout << "After push 5" << endl;
    printArray(arr);

    pushArray(arr, 1);
    cout << "After push 1" << endl;
    printArray(arr);

    pushArray(arr, 2);
    cout << "After push 2" << endl;
    printArray(arr);

    popArray(arr);
    cout << "After pop" << endl;
    printArray(arr);

    popArray(arr);
    cout << "After pop" << endl;
    printArray(arr);

    PriorityQueue a;
    Stack b;
    arr[0] = &a;
    arr[1] = &b;

    for(int i=0;i<MAX_LEN;i++)
        pushArray(arr, i);
    if(!arr[0]->push(MAX_LEN))
        cout << "Array is Full" << endl;
}