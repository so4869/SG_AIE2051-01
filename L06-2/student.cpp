#include "student.hpp"
#include <iostream>

using namespace std;

//TODO
//modify a constructor
Student::Student(int id, int age, double gpa) /*: UnivMem(id, age) */{
	this->id = id;
	this->age = age;
	this->GPA = gpa;
}

void Student::print() {
	std::cout << "student: " << this->id << ' ' << this->age << ' ' << this->GPA << std::endl;
	//TODO
}
