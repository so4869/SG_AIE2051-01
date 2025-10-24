#include "priorityQueue.hpp"
#include <iostream>

using namespace std;

PriorityQueue::PriorityQueue(int elem){
    this->front = -1;
    this->rear = -1;

    // this->arr[0] = elem;
    this->push(elem);
}
bool PriorityQueue::push(int elem){
    // validation
    if (MAX_LEN <= this->rear + 1) {
        return false;
    }

    // by definition, lower number get high priority.
    // And the main array is always sorted.

    // binary search
    int start_index = this->front + 1, end_index = this->rear + 1;
    int middle_index = 0;
    int middle_value = 0;

    bool debug = false;
    if (debug) {
        std::cout << "start_index: " << start_index << ", end_index: " << end_index << std::endl;
    }

    while (end_index > start_index) {
        middle_index = (start_index + end_index) / 2;
        middle_value = this->arr[middle_index];

        if (debug) {
            std::cout << "\tb-search middle_index: " << middle_index << "\t\t middle_value: " << middle_value << std::endl;
            std::cout << "\tb-search start_index: " << start_index << "\t\t end_index: " << end_index << std::endl;
        }

        if (middle_value == elem) {
            break;
        }
        else if (middle_value < elem) {
            start_index = middle_index += 1;
        }
        else {
            end_index = middle_index -= 1;
        }
    }

    // front = 0, rear = 1

    if (debug) {
        std::cout << "AS IS ------------------------------" << std::endl;
        for (int i = 0; i <= this->rear; i++) {
            std::cout << this->arr[i] << ' ';
        }
        std::cout << std::endl;
    }

    // pull array elements
    for (int i = this->rear + 1; i > middle_index; i--) {
        this->arr[i] = this->arr[i - 1];
    }
    this->arr[middle_index] = elem;
    this->rear += 1;

    if (debug) {
        std::cout << "b-search result: middle index: " << middle_index << ", and it's value: " << middle_value << std::endl;

        std::cout << "TO BE ------------------------------" << std::endl;
        for (int i = 0; i <= this->rear; i++) {
            std::cout << this->arr[i] << ' ';
        }
        std::cout << std::endl;
    }

    return true;
}

bool PriorityQueue::pop(){
    // validation
    if (this->isEmpty()) {
        return false;
    }

    int highest_priority_index = this->front + 1;
    // 왜 안쓰지? 보통 pop하고 반환하는데,,
    int highest_priority_value = this->arr[highest_priority_index];

    for (int i = highest_priority_index; i < this->rear; i++) {
        this->arr[i] = this->arr[i + 1];
    }
    this->rear -= 1;

    return true;
}

bool PriorityQueue::isEmpty(){
    return this->front == this->rear;
}

void PriorityQueue::print(){
    for (int i = 0; i <= this->rear; i++) {
        std::cout << this->arr[i] << ' ';
    }
    std::cout << std::endl;
}