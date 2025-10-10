#include "univmem.hpp"
#include <iostream>

using namespace std;

UnivMem::UnivMem(int i, int a){
	id = i;
	age = a;
	cout<< "univmem: " << id << " " << age << endl;
}

void UnivMem::print (){
	cout<< "univmem: " << id << " " << age << endl;
}