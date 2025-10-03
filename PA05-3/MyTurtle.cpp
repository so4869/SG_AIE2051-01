#include "MyTurtle.h"
#include "Point.h"
#include "png++/png.hpp"
#include <iostream>
#include <math.h>

// TIPS
// How to fill color in pixel (x,y) in image object.
// Integer variables: red_value, green_value, blue_value
// (*image)[y][x] = png::rgb_pixel( red_value, green_value, blue_value );
// please think *image as a 2D array of png::rgb_pixel objects!

/**
 * @Author: HyunJin, SO
 * Command:
 * 6
 * 2 30
 * 0 30
 * 2 120
 * 0 30
 * 1 240
 * 0 30
 */


MyTurtle::MyTurtle( int _rows, int _cols, RGBImage* _rgbimage ){
    line_color = png::rgb_pixel(255,255,255);
    //TODO
    this->rgbimage = _rgbimage;

    int width = this->rgbimage->get_width();
    int height = this->rgbimage->get_height();

    this->position = Point(width / 2, height / 2);
    this->view_angle = 0.0;
}

void MyTurtle::goStraight(float distance){
    //TODO
    double radian = this->view_angle * M_PI / 180;
    double distance_x = distance * cos(radian);
    double distance_y = distance * sin(radian);
    double destination_x = this->position.x_p + distance_x;
    double destination_y = this->position.y_p + distance_y;

    int width = this->rgbimage->get_width();
    int height = this->rgbimage->get_height();
    if (destination_x < 0) {
        destination_x = 0;
    }
    else if (destination_x > width) {
        destination_x = width;
    }
    if (destination_y < 0) {
        destination_y = 0;
    }
    else if (destination_y > height) {
        destination_y = height;
    }

    for (int i = 0; i < distance; i++) {
        int c_x = ((distance - i) * this->position.x_p + i * destination_x) / distance;
        int c_y = ((distance - i) * this->position.y_p + i * destination_y) / distance;

        this->rgbimage->set_pixel(c_x, c_y, line_color);
    }

    this->position.x_p = destination_x;
    this->position.y_p = destination_y;
}

void MyTurtle::turnLeft(float angle){
    //TODO
    this->view_angle += angle;
}

void MyTurtle::turnRight(float angle){
    //TODO
    this->view_angle -= angle;
}