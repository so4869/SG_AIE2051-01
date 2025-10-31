#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        next = NULL;
    }

    ~Node() {
        cout << "delete" << endl;
    }
};

void printList(Node *front) {
    //TODO
    //make print the list.
    Node *current_node = front;
    while (current_node != NULL) {
        std::cout << current_node->data << ' ';
        current_node = current_node->next;
    }

    std::cout << std::endl;
}

void deleteList(Node *front) {
    //TODO
    //delete the full list element.
    Node *current_node = front;
    while (current_node != NULL) {
        Node *next = current_node->next;
        delete current_node;
        current_node = next;
    }
}


void insertIndex(Node **front, int index, int value) {
    //TODO
    //2. code implementation.
    Node *prev = NULL;
    Node *curr = *front;

    for (int i = 0; i < index; i++) {
        if (curr->next == NULL) {
            break;
        }

        prev = curr;
        curr = curr->next;
    }

    // std::cout << prev->data << std::endl;
    // std::cout << curr->data << std::endl;

    Node *new_node = new Node();
    new_node->data = value;

    if (index == 0) {
        // std::cout << "inde 0" << std::endl;
        *front = new_node;
    } else {
        prev->next = new_node;
    }
    new_node->next = curr;
}
