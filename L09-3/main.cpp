#include <iostream>

using namespace std;

//TODO
// Implement a funciton template for class Node
// Please refer to a funciton with integer datatype.

template<typename T>
class Node {
private:
    T data;

public:
    Node<T> *next = NULL; // same as Node<T> *next = NULL;

    Node(T d, Node<T> *n): data(d), next(n) {
    }

    T GetData() {
        return data;
    }
};

int main() {
    // Integer Linked List
    Node<int> *x = new Node<int>(2, NULL);
    Node<int> *y = new Node<int>(33, x);
    Node<int> *tmp = y;

    while (tmp != NULL) {
        cout << tmp->GetData() << " ";
        tmp = tmp->next;
    }
    cout << endl;

    // Floating Linked List
    typedef Node<float> Nodef;
    Nodef *xf = new Nodef(1.2, NULL);
    Nodef *yf = new Nodef(3.2, xf);
    Nodef *tmpf = yf;

    while (tmpf != NULL) {
        cout << tmpf->GetData() << " ";
        tmpf = tmpf->next;
    }


    return 0;
}
