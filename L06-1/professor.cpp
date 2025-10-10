#include "professor.hpp"
#include <iostream>

using namespace std;

//TODO
// build a constructor
// Don't implement print() function

Professor::Professor(int id, int age, int room): UnivMem(id, age), room(room) {
	std::cout << "professor: " << this->room << std::endl;
}
