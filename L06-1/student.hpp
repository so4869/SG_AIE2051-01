#pragma once

#include "univmem.hpp"

class Student : public UnivMem {
private:
	double gpa;

public:
	Student(int, int, double);

	double getGpa();
	void setGpa(double);
};
