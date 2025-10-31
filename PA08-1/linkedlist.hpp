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
