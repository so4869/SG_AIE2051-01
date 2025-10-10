#include <cstdio>
#include "lecture.hpp"
#include "student.hpp"

using std::cout;
using std::endl;


// TODO: Fill in these functions.

void Student::PrintGrade() {

    for (int i = 0; i < this->lecture_cnt; i++) {
        Lecture* lecture = this->lectures[i];
        Grade grade = NA;
        lecture->GetGradeOf(this->GetID(), &grade);
        std::cout << lecture->GetCode() << " : " << GradeToString(grade) << std::endl;
    }

}

bool Student::Register(Lecture *lec) {
    // std::cout << "학생에서 과목 추가" << std::endl;

    // 본인의 최대수강수를 초과하는지 확인
    if (MAX_LECTURE <= this->lecture_cnt) {
        return false;
    }

    bool succeeded = lec->AddStudent(this->GetID());
    if (!succeeded) {
        return succeeded;
    }

    this->lectures[this->lecture_cnt] = lec;
    this->lecture_cnt += 1;

    return true;
}
