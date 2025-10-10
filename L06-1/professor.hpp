#pragma once

#include "univmem.hpp"

class Professor : public UnivMem {
private:
	int room;

public:
	Professor(int, int, int);
};
