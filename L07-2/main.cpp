#include <iostream>

using namespace std;


class Shape{
protected:
    double area;
    double width, height;

public:
    Shape() {}
    Shape(double _width, double _height) {
        width = _width;
        height = _height;
    }

    virtual void printArea() = 0;
    // TODO
    virtual void computeArea() = 0;
};


class Triangle: public Shape /* TODO */ {
private:

public:
    Triangle() {}
    Triangle(double _w, double _h): Shape(_w,_h) {}

    void printArea() {
        std::cout << "The area of triangle is " << area << std::endl;
    }

    // TODO
    void computeArea() {
        this-> area = width * height / 2;
    }
};


class Rectangle: public Shape /* TODO */ {
private:

public:
    Rectangle() {}
    Rectangle(double _w, double _h): Shape(_w,_h) {}

    void printArea() {
        std::cout << "The area of rectangle is " << area << std::endl;
    }

    //TODO
    void computeArea() {
        this->area = width * height;
    }
};


int main(){

    Triangle tri(10, 20);
    Rectangle rect(10, 20);
    tri.computeArea();
    rect.computeArea();
    tri.printArea();
    rect.printArea();

    return 0;

}