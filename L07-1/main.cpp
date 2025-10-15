#include <iostream>

using namespace std;

class UnivMem{
protected:
    int id;
    int age;
public:
    UnivMem() {}
    UnivMem(int _id, int _age): id(_id), age(_age) {}

    /*virtual */void print() {
        cout << "UnivMem - id: " <<  id << " age: " << age << endl;
    }
    // error: the class containing pure virtual method must be abstract class
    // void print() = 0;
};

class Student: public UnivMem {
private:
    double gpa;
public:
    Student() {}
    Student(int _id, int _age, double _gpa): UnivMem(_id, _age) {
        gpa = _gpa;
    }

    void print() {
        std::cout << "Student - id: " << this->id << " age: " << this->age << " gpa: " << this->gpa << std::endl;
    }
};

class Professor: public UnivMem {
private:
    int room;
public:
    Professor() {}
    Professor(int _id, int _age, int _room): UnivMem(_id, _age) {
        room = _room;
    }

    void print() {
        std::cout << "Professor - id: " << this->id << " age: " << this->age << " room: " << this->room << std::endl;
    }
};


int main(){

    UnivMem m1(0, 30);
    Student stu(1, 20, 4.3);
    Professor prof(2, 30, 818);

    stu.print();
    prof.print();

    UnivMem *mptr1 = &stu;
    UnivMem *mptr2 = &prof;

    mptr1->print();
    mptr2->print();

    return 0;

}