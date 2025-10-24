#include <cstdio>
#include <iostream>

class UnivMem {
private:
	int id;

protected:
	int age;

public:
	UnivMem(int i, int a) {
		id = i;
		age = a;
	}

	void Print() {
		printf("ID: %d\n", id);
		printf("Age: %d\n", age);
	}
};

class Student : public UnivMem {
private:
	double GPA;

public:
	Student(int i, int a, double g)
		: UnivMem(i, a) {
		GPA = g;
	}

	double GetGPA() {
		return GPA;
	}
};


class Professor : public UnivMem {
private:
	int room;

public:
	Professor(int i, int a, int r)
		: UnivMem(i, a) {
		room = r;
	}

	int GetRoomNumber() {
		return room;
	}
};

void printMem(UnivMem *mems[], int n) {
	for (int i = 0; i < n; i++)
		mems[i]->Print();
}

int main() {
	UnivMem *members[3];

	Professor p(0, 34, 818);
	Student s(1, 20, 4.3);
	UnivMem u(2, 20);

	// it works!
	members[0] = &p;
	members[1] = &s;
	members[2] = &u;

	printMem(members, 3);

	// using child methods isn't allowed if the object is casted to the parent class.
	//members[0]->GetRoomNumber();
	//members[1]->getGPA();

	// conversion from parent object to child object is not allowed
	Professor *p_ptr1 = static_cast<Professor *>(&u);
	std::cout << "professor room " << p_ptr1->GetRoomNumber() << std::endl;

	Student *p_ptr2 = static_cast<Student *>(&u);
	std::cout << "student gpa " << p_ptr2->GetGPA() << std::endl;

	Professor *p_ptr = static_cast<Professor *>(&p);
	std::cout << "real room " << p_ptr->GetRoomNumber() << std::endl;

	return 0;
}
