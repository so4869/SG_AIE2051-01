#include "right-triangle.hpp"

// TODO: Fill in these functions.

bool RightTriangle::Shift(int delta_x, int delta_y) {

    int current_x = this->ra_point.GetX();
    int current_y = this->ra_point.GetY();

    int new_x = current_x + delta_x;
    int new_y = current_y + delta_y;

    // validation if x or y goes negative.
    if (new_x < 0 || new_y < 0) {
        return false;
    }

    this->ra_point.SetXY(new_x, new_y);

    return true;
}

bool RightTriangle::DoubleSize() {
    int current_ra_x = this->ra_point.GetX();
    int current_ra_y = this->ra_point.GetY();
    int new_x_offset = this->x_offset * 2;
    int new_y_offset = this->y_offset * 2;

    if (current_ra_x + new_x_offset < 0 || current_ra_y + new_y_offset < 0) {
        return false;
    }

    this->x_offset = new_x_offset;
    this->y_offset = new_y_offset;

    return true;
}

bool RightTriangle::Rotate() {

    // (1, 2) -> (2, -1)
    int new_x_offset = this->y_offset;
    int new_y_offset = this->x_offset * -1;

    this->x_offset = new_x_offset;
    this->y_offset = new_y_offset;

    return true;
}
