# Lecture Management

Now let’s write classes that interact with Lecture.  
First, copy your [lecture.cpp] file from the previous assignment.  
UnivMem class is defined in univmem.hpp and this class will be inherited by Student and Professor classes.
```c++
class UnivMem {
private:
    int id;
    char name[MAX_NAME_LEN + 1];
public:
    UnivMem(int _id, const char* _name) { ... }
    int GetID() { ... }
    const char* GetName() { ... }
    void Print() { ... }
```

Student class is partially defined in student.hpp by inheriting UnivMem.  
Properties and constructor are given.  
‘lecture_cnt’ stores how many lectures this student is taking.  
‘Lecture’ stores object pointers of the lectures that this student is taking.  
A student can take up to MAX_LECTURE lectures.
```c++
class Student: public UnivMem {
private:
    int lecture_cnt;
    Lecture* lectures[MAX_LECTURE];
public:
    Student(int _id, const char* _name) { ... }
    ...
```

Implement the following functions in student.cpp  
*Read the Comments and insert the corresponding parts of each comments!!*
```c++
// Print the grades of this student. For each of the lecture, 
// print its lecture code and the student's grade in the 
// following format:
// "<lecture code> : <grade string>\n"
// You can use GradeToString() function provided in lecture.hpp 
void PrintGrade();

// If this student can take more lectures, try to add this 
// student to 'lec’. Return false if this registration was 
// unsuccessful. If the registration was successful, update 
// 'lectures' and 'lecture_cnt' properties to reflect the 
// registration, and then return true.
bool Register(Lecture *lec);
```

Next, we define Professor class as well.  
Professor class is partially defined in professor.hpp file by inheriting UnivMem.  
Properties and constructor are given.  
A professor always has one lecture to teach.
```c++
class Professor: public UnivMem {
private:
    Lecture *lecture;
public:
    Professor(int _id, const char* _name, Lecture * _lecture)
    { ... }
    ...
```

Implement the following function in professor.cpp  
*Read the Comments and insert the corresponding parts of each comments!!*
```c++
// Update the student's grade in 'lecture'. Set the grade of 
// the student with 'student_id' into 'student_grade'. Return
// false if such a student does not exist in 'lecture'.
bool GradeStudent(int student_id, Grade student_grade);
```

Expected Output
```
Alice(20220001)
CSE2015 : B
CSE2035 : NA
=============
Brian(20220002)
CSE2015 : C
CSE2035 : NA
=============
```
