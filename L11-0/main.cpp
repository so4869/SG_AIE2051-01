#include <iostream>

using namespace std;

// template <class T>

// inline const T& my_max ( T& pa, T& pb){
//     if ( pa < pb ) return pb;
//     else return pa;
// }

// int main(){

//     const int a=5, b=3;
//     const int c = 3;
//     my_max <int>(a,b);

//     cout << c;

// }


template <class T>
inline const T& my_max(const T& pa,const T& pb){
    return pa < pb ? pb : pa;
}

int main(){
    const int a = 5, b = 3;
    const int c = my_max<int>(a,b);

    cout << c;

    return 0;
}