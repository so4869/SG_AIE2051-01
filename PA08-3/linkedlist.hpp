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

void reverseList(Node **front) {
    //TODO
    //write a function.
    Node *curr = *front;
    Node *prev = NULL;

    while (curr != NULL) {
        Node *next = curr->next;

        // prev == NULL이면 첫번째, 첫번째는 next가 없다.
        // prev != NULL이면 첫번째 아님, prev를 curr->next로 참조시킨다.
        curr->next = prev != NULL ? prev : NULL;

        prev = curr;
        curr = next;
    }

    // front에 마지막 node를 참조시킨다.
    *front = prev;
}
