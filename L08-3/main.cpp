#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        next = NULL;
    }

    Node(int _data) {
        data = _data;
        next = NULL;
    }

    Node(int _data, Node *_next) {
        data = _data;
        next = _next;
    }
};


int main() {
    int n;
    int data;
    Node *head = NULL;

    cin >> n;
    Node *prev = NULL;

    for (int i = 0; i < n; i++) {
        cin >> data;

        Node *tmp;
        // TODO
        // Create a node
        tmp = new Node(data);


        // TODO
        // Insert the node to the linked list
        if (head != NULL) {
            tmp->next = head;
        }
        head = tmp;
    }

    Node *x = head;
    for (x = head; x != NULL; x = x->next) {
        cout << x->data << " ";
        delete x;
    }

    return 0;
}
