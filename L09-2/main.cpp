#include <iostream>

using namespace std;

class Vec2 {
public:
    float x, y;

    Vec2() {
    }

    Vec2(float _x, float _y): x(_x), y(_y) {
    }
};

template<typename T>
T multiply(T a, T b) {
    T c = a * b;
    return c;
}

//TODO
// implement function for classtype Vec2
// donot declare * operator of Vec2.
template<>
Vec2 multiply(Vec2 v1, Vec2 v2) {
    Vec2 v(v1.x * v2.x, v1.y * v2.y);
    return v;
}


int main() {
    int ia = 1, ib = 3, ic;
    Vec2 va(1.1, 1.2), vb(2, 3), vc;

    ic = multiply<int>(ia, ib);
    vc = multiply<Vec2>(va, vb);
    cout << vc.x << " " << vc.y;
    return 0;
}
