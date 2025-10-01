#include <iostream>
#include "rectangle.h"

using namespace std;

int main(){

    int width, height;
    cin >> width >> height;

    Rectangle rect;

    rect.init(width, height);
    // rect.width = width;
    // rect.height = height;


    int area = rect.getArea();

    cout << area;


    return 0;

}