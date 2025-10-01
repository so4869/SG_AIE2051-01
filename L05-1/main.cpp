#include <iostream>

using namespace std;

// TODO
class Student {
public:
    int id, age;

    // void print();
    void print() {
        std::cout << "This is id " << this->id << ", a " << this->age << " old student.";
    }

    // private:
    //     int a;
    // public:
    //     int b;

};
// void Student::print() {
//     std::cout << "This is id " << this->id << ", a " << this->age << " old student.";
// }



int main(){

    int id, age;

    cin >> id >> age;

    Student x = Student();
    x.id = id;
    x.age = age;

    //TODO
    x.print();

    return 0;

}