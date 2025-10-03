#pragma once

#include <cmath>
#include "png++/png.hpp"
#include "Point.h"

typedef png::image< png::rgb_pixel > RGBImage;

class MyTurtle{
public:
    MyTurtle ();
    MyTurtle ( int _rows, int _cols, RGBImage* _rgbimage );
    void goStraight(float distance);
    void turnLeft(float angle);
    void turnRight(float angle);

private:
    RGBImage* rgbimage;
    Point position;
    float view_angle;
    png::rgb_pixel line_color;
};