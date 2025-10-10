#include "lecture.hpp"

// TODO: Fill in these functions.

bool Lecture::AddStudent(int id) {

    // student가 이미 있는지 확인
    int student_index = -1;
    for (int i = 0; i < this->student_cnt; i++) {
        if (this->ids[i] == id) {
            student_index = i;
            break;
        }
    }

    // 없으면 컷
    if (student_index != -1) {
        return false;
    }


    // MAX_STUDENT를 넘어섰는지 확인하고 넘어섰으면 컷
    if (MAX_STUDENT <= this->student_cnt) {
        return false;
    }


    // 이후 추가, 변수명
    /**
        int student_cnt;
        int ids[MAX_STUDENT];
        Grade grades[MAX_STUDENT];
    */

    this->ids[this->student_cnt] = id;
    this->grades[this->student_cnt] = NA;

    this->student_cnt += 1;

    return true;
}

bool Lecture::SetGradeOf(int id, Grade grade) {

    // student가 이미 있는지 확인
    int student_index = -1;
    for (int i = 0; i < this->student_cnt; i++) {
        if (this->ids[i] == id) {
            student_index = i;
            break;
        }
    }

    // 없으면 컷
    if (student_index == -1) {
        return false;
    }

    grades[student_index] = grade;


    return true;
}

bool Lecture::GetGradeOf(int id, Grade *pGrade) {

    // student가 이미 있는지 확인
    int student_index = -1;
    for (int i = 0; i < this->student_cnt; i++) {
        if (this->ids[i] == id) {
            student_index = i;
            break;
        }
    }

    // 없으면 컷
    if (student_index == -1) {
        return false;
    }

    *pGrade = grades[student_index];

    return true;
}

