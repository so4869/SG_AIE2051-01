#include <iostream>
#include "shape.hpp"
#include "right-triangle.hpp"

// I will fix these functions to test your class implementation

void MoveShapes(Shape ** shapes, int delta_x, int delta_y) {
    for (int i = 0; shapes[i] != NULL; i++)
        shapes[i]->Shift(delta_x, delta_y);
}

void doubleShapes(Shape ** shapes) {
    for (int i = 0; shapes[i] != NULL; i++)
        shapes[i]->DoubleSize();
}

void rotateShapes(Shape ** shapes) {
    for (int i = 0; shapes[i] != NULL; i++)
        shapes[i]->Rotate();
}

void printShapes(Shape ** shapes) {
    for (int i = 0; shapes[i] != NULL; i++) {
        shapes[i]->Print();
        std::cout << "================\n";
    }
}

void test() {
    RightTriangle t(5, 5, 3, 4);
    Shape* shapes[2];
    shapes[0] = &t;
    shapes[1] = NULL; // Let's use NULL pointer to indicate the end of array.
    MoveShapes(shapes, 10, 20);
    doubleShapes(shapes);
    rotateShapes(shapes);
    printShapes(shapes);
}

int main() {
    test();
    return 0;
}
