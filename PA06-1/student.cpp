#include "student.hpp"
#include <iostream>

using namespace std;

//TODO
//build a constructor
// Don't implement print() function

Student::Student(int id, int age, double gpa): UnivMem(id, age), gpa(gpa) {
	std::cout << "student: " << this->gpa << std::endl;
}

double Student::getGpa() {
	return this->gpa;
}

void Student::setGpa(double gpa) {
	this->gpa = gpa;
}
