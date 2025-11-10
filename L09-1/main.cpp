#include <iostream>

using namespace std;

// TODO
// Implement a function template for add functions
// Please refer to function add.

/*
int add ( int a, int b ){
    int sum = a + b;
    return a+b;
}
*/

template<typename T>
T add(T a, T b) {
    return a + b;
}


int main() {
    int ia, ib, ic;
    double da, db, dc;

    ia = 1;
    ib = 2;
    da = 1.2;
    db = 2.3;

    // TODO
    // use the template to declare add functions with different datatypes.
    // call the corresponding function with respect to datatype.
    // ex)
    ic = add<int>(ia, ib);
    dc = add<double>(da, db);

    cout << ia << "+" << ib << " " << ic << endl;
    cout << da << "+" << db << " " << dc << endl;
    return 0;
}
