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

void printlist(Node *head, int num) {
    //TODO
    //print the linked list to check
    Node *current = head;
    while (current != NULL) {
        std::cout << current->data << ' ';
        current = current->next;
    }

    std::cout << std::endl;
}

int main() {
    int n, k;
    int data;
    Node *head = NULL;

    cin >> n;

    for (int i = 0; i < n; i++) {
        head = new Node(i, head);
    }
    // to check well assign
    printlist(head, n);

    cin >> k;

    Node *curr = head;
    Node *prev;
    //TODO
    // find the k-th node by moving x to the next node k times.
    // exclude k-th node x by linking the previous node of x to the next node of x.
    // delete the k-th node

    for (int i = 0; i < k - 1; i++) {
        if (curr->next == NULL) {
            break;
        }

        prev = curr;
        curr = curr->next;
    }

    if (k <= 1) {
        head = curr->next;
    } else {
        prev->next = curr->next;
    }

    delete curr;

    // to check delete well
    printlist(head, n);

    return 0;
}
