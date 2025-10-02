#include "png++/png.hpp"
#include "EliceUtils.h"

#include <iostream>
#include <png.h>

using namespace std;

void image_function(png::image< png::rgb_pixel > *image, int array[][128] ){
    for (png::uint_32 y = 0; y < image->get_height(); ++y){
        for (png::uint_32 x = 0; x < image->get_width(); ++x){
            (*image)[y][x] = png::rgb_pixel(array[y][x], array[y][x], array[y][x]);
        }
    }
}

int main(){

    EliceUtils utils = EliceUtils();

    const int ROWS = 128;
    const int COLS = 128;

    // image object
    png::image< png::rgb_pixel > image(ROWS, COLS);

    // integer array
    int array[ROWS][COLS]={0,};

    int lu_x, lu_y, rl_x, rl_y;

    cin >>lu_x >> lu_y >> rl_x >> rl_y;

    // 시작점x가 음수면
    if (lu_x < 0) {
        lu_x = 0;
    }
    // 시작점x가 최대 가로 크기를 넘어가면
    else if (ROWS - 1 < lu_x) {
        lu_x = ROWS - 1;
    }

    // 시작점 y가 음수면
    if (lu_y < 0) {
        lu_y = 0;
    }
    // 시작점 y가 최대 세로크기를 넘어가면
    else if (COLS - 1 < lu_y) {
        lu_y = COLS - 1;
    }

    // 종료점x가 음수면
    if (rl_x < 0) {
        rl_x = 0;
    }
    // 종료점x가 최대 가로 크기를 넘어가면
    else if (ROWS - 1 < rl_x) {
        rl_x = ROWS - 1;
    }

    // 종료점 y가 음수면
    if (rl_y < 0) {
        rl_y = 0;
    }
    // 종료점 y가 최대 세로크기를 넘어가면
    else if (COLS - 1 < rl_y) {
        rl_y = COLS - 1;
    }

    //TODO
    for (int i = lu_y; i < rl_y; i++) {
        for (int j = lu_x; j < rl_x; j++) {
            array[i][j] = 255;
        }
    }


    image_function(&image, array);

    image.write("rgb.png");
    utils.send_image("rgb.png");
    return 0;
}