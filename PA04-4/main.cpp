// #include <png++/png.hpp>
#include "png++/png.hpp"
#include "EliceUtils.h"
#include <iostream>
#include <cmath>

using namespace std;

//TODO: Fill in all points on the line connecting x1, y1 to x2, y2 with 255 (white) in the array.
void draw_line(int x1, int y1, int x2, int y2, int array[][129]) {
    for (int i = 0; i < 64; i++) {
        int c_x = ((64 - i) * x1 + i * x2) / 64;
        int c_y = ((64 - i) * y1 + i * y2) / 64;
        // std::cout << '(' << c_x << ", " << c_y << ')' << std::endl;
        // array[c_x][c_y] = 255;
        array[c_y][c_x] = 255;
    }
}


void image_function(png::image< png::rgb_pixel > *image, int array[][129]){
    for (png::uint_32 y = 0; y < image->get_height(); ++y){
        for (png::uint_32 x = 0; x < image->get_width(); ++x){
            (*image)[y][x] = png::rgb_pixel(array[y][x], array[y][x], array[y][x]);
        }
    }
}

int main(){
    EliceUtils utils = EliceUtils();

    const int ROWS = 129;
    const int COLS = 129;

    png::image< png::rgb_pixel > image(ROWS, COLS);
    int array[ROWS][COLS] = {0,};

    int n; // hour
    cin >> n;

    int init_x = 64, init_y = 64;
    int radius = 64;

    // TODO : Convert degree to radian. And calculate x_end, y_end for full radius.
    int d = (n * 30 - 90) * -1;
    // std::cout << d << std::endl;
    double r = d * M_PI / 180;
    // std::cout << r << std::endl;;


    // TODO: Interpolate to determine x2, y2 for two-thirds of the radius. Then, use the draw_line function.
    int x2 = (init_x + (int) (radius * cos(r) * 2 / 3));
    int y2 = (init_y - (int) (radius * sin(r) * 2 / 3));
    // std::cout << radius * cos(r) << ", " << radius * sin(r) << std::endl;
    // std::cout << x2 << ", " << y2 << std::endl;
    draw_line(init_x, init_y, x2, y2, array);


    image_function(&image, array);
    image.write("/Volumes/d/sandbox/SG_AIE2051-01/PA04-4/clock_hour.png");
    utils.send_image("clock_hour.png");
    //cout << x2 << " " << y2 << endl;
    return 0;
}
