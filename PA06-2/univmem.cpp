#include "univmem.hpp"
#include <iostream>

using namespace std;

UnivMem::UnivMem() {
	this->id = 0;
	this->age = 0;
}

UnivMem::UnivMem(int i, int a){
	id = i;
	age = a;
}
