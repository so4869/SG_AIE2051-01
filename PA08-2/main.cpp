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

    //before insertIndex
    printList(front);

    insertIndex(&front, 2, 33);
    cout << "inserted index 2 with an integer value 33" << endl;
    //after insertIndex
    printList(front);

    insertIndex(&front, 0, 11);
    cout << "inserted index 0 with an integer value 11" << endl;
    printList(front);

    deleteList(front);

    return 0;
}
