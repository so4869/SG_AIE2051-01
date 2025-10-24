#include "rectangle.hpp"

// TODO: Fill in these functions.

bool Rectangle::Shift(int delta_x, int delta_y) {

    int current_x = this->left_up.GetX();
    int current_y = this->left_up.GetY();

    int new_x = current_x + delta_x;
    int new_y = current_y + delta_y;

    // validation if x or y goes negative.
    if (new_x < 0 || new_y < 0) {
        return false;
    }

    int current_end_x = this->right_low.GetX();
    int current_end_y = this->right_low.GetY();
    int new_end_x = current_end_x + delta_x;
    int new_end_y = current_end_y + delta_y;

    this->left_up.SetXY(new_x, new_y);
    this->right_low.SetXY(new_end_x, new_end_y);

    return true;
}

bool Rectangle::DoubleSize() {

    int current_start_x = this->left_up.GetX();
    int current_start_y = this->left_up.GetY();
    int current_end_x = this->right_low.GetX();
    int current_end_y = this->right_low.GetY();

    int delta_x = current_end_x - current_start_x;
    int delta_y = current_end_y - current_start_y;

    int new_right_low_x = current_end_x + delta_x;
    int new_right_low_y = current_end_y + delta_y;

    if (new_right_low_x < 0 || new_right_low_y < 0) {
        return false;
    }

    this->right_low.SetXY(new_right_low_x, new_right_low_y);

    return true;
}

bool Rectangle::Rotate() {

    int current_start_x = this->left_up.GetX();
    int current_start_y = this->left_up.GetY();
    int current_end_x = this->right_low.GetX();
    int current_end_y = this->right_low.GetY();

    // linear transformation
    int delta_x = (current_end_y - current_start_y);
    int delta_y = (current_end_x - current_start_x) * -1;

    this->right_low.SetXY(current_start_x + delta_x, current_start_y + delta_y);

    int new_left_up_x = current_start_x;
    int new_left_up_y = current_start_y + delta_y;
    int new_right_low_x = current_start_x + delta_x;
    int new_right_low_y = current_start_y;

    if (new_left_up_x < 0 || new_left_up_y < 0 || new_right_low_x < 0 || new_right_low_y < 0) {
        return false;
    }

    this->left_up.SetXY(new_left_up_x, new_left_up_y);
    this->right_low.SetXY(new_right_low_x, new_right_low_y);

    return true;
}
