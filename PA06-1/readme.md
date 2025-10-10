# Lecture Class

Let’s write a class that manages lecture information.  
Properties, constructor, and GetCode() are given in lecture.hpp file.
```c++
enum Grade { A, B, C, NA };
...
class Lecture {
private:
    char code[MAX_CODE_LEN + 1];
    int student_cnt;
    int ids[MAX_STUDENT];
    Grade grades[MAX_STUDENT];
public:
    Lecture(const char * _code): student_cnt(0) {
        strncpy(code, _code, MAX_CODE_LEN);
        code[MAX_CODE_LEN] = '\0';
    }
```

Implement the following functions in lecture.cpp  
*Read the Comments and insert the corresponding parts of each comments!!*
```c++
// Add a student whose ID is 'id'. The student's grade must be
// initialized as 'NA'. Store the information of the student at
// 'ids[student_cnt]' and 'grades[student_cnt]'. After adding the
// student, increase 'student_cnt' by one and return true. If the
// lecture is already full or 'id' is already present in this 
// lecture, don't add the student and just return false.
bool AddStudent(int id);

// Update the grade of the student whose ID is 'id' into 'grade'. If
// such a student doesn't exist, just return false.
bool SetGradeOf(int id, Grade grade);

// Get the grade of the student whose ID is 'id', and store it at
// '*pGrade’. If such a student doesn't exist, just return false.
bool GetGradeOf(int id, Grade *pGrade);
```

Expected Output
```
Grade of 20220002: A
```
