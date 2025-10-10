#include <iostream>
#include "lecture.hpp"
#include "student.hpp"
#include "professor.hpp"

// I will fix this function to test your class implementation
void test() {
	Lecture lec1("CSE2015");
	Lecture lec2("CSE2035");
	Professor p(102233, "Jooho", &lec1);
	Student s1(20220001, "Alice");
	Student s2(20220002, "Brian");

	s1.Register(&lec1);
	s1.Register(&lec2);
	p.GradeStudent(20220001, B);
	s1.Print();
	s1.PrintGrade();
	cout << "=============\n";

	s2.Register(&lec1);
	s2.Register(&lec2);
	p.GradeStudent(20220002, C);
	s2.Print();
	s2.PrintGrade();
	cout << "=============\n";
}

int main() {
	test();
	return 0;
}
