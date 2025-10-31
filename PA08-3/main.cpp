#include <iostream>
#include "linkedlist.hpp"
using namespace std;


int main() {
    Node *front = new Node();
    front->data = 42;
    front->next = new Node();
    front->next->data = -3;
    front->next->next = new Node();
    front->next->next->data = 17;
    front->next->next->next = NULL;

    printList(front);
    reverseList(&front);
    cout << "reversed" << endl;
    printList(front);

    deleteList(front);

    return 0;
}
