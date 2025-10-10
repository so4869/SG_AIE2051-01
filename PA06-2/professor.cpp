#include <cstdio>
#include "lecture.hpp"
#include "professor.hpp"

// TODO: Fill in these functions.

bool Professor::GradeStudent(int student_id, Grade student_grade) {

    // 해당 교수에게 lecture가 할당돼있는지 확인
    if (this->lecture == NULL) {
        return false;
    }

    // 해당 lecture에 해당 학생이 있는지 확인 하는것이 국룰이나, Lecture.SetGradeOf에서 이미 확인하고 잇으며, 해당 field들이 private이고, hpp를 수정할 수 없는 제약조건이 잇으므로 수행하지 않는다.

    return this->lecture->SetGradeOf(student_id, student_grade);
}
