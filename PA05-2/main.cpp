#include <iostream>
#include "Point.h"

using namespace std;

int main(){

    Point point1(1,2), point2(2,3);
    Point c;

    float scale;
    scale = 3.1;

    point1.print();
    point2.print();

    c = point1 + point2;
    c.print();
    c = c * scale;
    c.print();

    return 0;

}