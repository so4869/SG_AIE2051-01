#pragma once
#include <iostream>

using namespace std;

class Point{
public:

    // define properties
    float x_p;
    float y_p;
    Point(float x, float y) : x_p(x), y_p(y){ }
    Point(){}

    Point operator+(float &x){

        return Point(x_p + x, y_p + x);
    }

};
