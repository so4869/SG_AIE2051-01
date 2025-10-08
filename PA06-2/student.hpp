#pragma once

#include "univmem.hpp"

class Student: public UnivMem{
private:
	double GPA;
public:
	Student(int id, int age, double gpa);
	void print();
};
