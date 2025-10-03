#pragma once
#include <iostream>

class Point{
private:
    double x, y;
public:
    // TODO
    // define properties
    Point() {

    }

    Point(double x, double y): x(x), y(y) {

    }

    double getX() {
        return this->x;
    }
    double getY() {
        return this->y;
    }

    Point operator+(Point &x){
        return Point(this->getX() + x.getX(), this->getY() + x.getY());
    }
    Point operator-(Point &x){
        return Point(this->getX() - x.getX(), this->getY() - x.getY());
    }
    Point operator*(float &x){
        return Point(this->getX() * x, this->getY() * x);
    }

    void print() {
        std::cout << "x:" << this->x << " y:" << this->y << std::endl;
    }
};
