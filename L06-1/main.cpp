#include "univmem.hpp"
#include "student.hpp"
#include "professor.hpp"

int main() {
	Professor prof(13241324, 34, 818);
	prof.print();
	Student stu(20241111, 20, 4.3);
	stu.print();

	return 0;
}
