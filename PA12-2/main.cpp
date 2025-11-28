#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "checker.hpp"
#include "printOutput.hpp"


using namespace std;

// class Student {
// public:
//     int student_id;
//     string name;
//     int age;
// };


bool compareByIdDescending(const Student& a, const Student& b) {
    //TODO
    return a.student_id > b.student_id;
}

bool compareByNameDescending(const Student& a, const Student& b) {
    //TODO
    return a.name > b.name;
}

bool compareByAgeDescending(const Student& a, const Student& b) {
    //TODO
    return a.age > b.age;
}

bool compareByIdAscending(const Student& a, const Student& b) {
    //TODO
    return a.student_id < b.student_id;
}

bool compareByNameAscending(const Student& a, const Student& b) {
    //TODO
    return a.name < b.name;
}

bool compareByAgeAscending(const Student& a, const Student& b) {
    //TODO
    return a.age < b.age;
}

void printStudentsToFile(const vector<Student>& students, ofstream& outFile) {
    for (const Student & iter : students) {
        outFile << "ID:" << iter.student_id;
        outFile << ",Name:" << iter.name;
        outFile << ",Age:" << iter.age;
        outFile << std::endl;

        // // for debug
        // std::cout << "ID:" << iter.student_id;
        // std::cout << ",Name:" << iter.name;
        // std::cout << ",Age:" << iter.age;
        // std::cout << std::endl;
    }
}

int main() {

    int index;
    cin >> index;

    stringstream fileNameStream;
    fileNameStream << "input" << index << ".txt";
    string fileName = fileNameStream.str();
    ifstream inFile(fileName);



    if (!inFile.is_open()) {
        cerr << "Unable to open input file." << endl;
        return 1;
    }


    int id, age;
    string name;
    vector<Student> students;

    while (inFile >> id >> name >> age) {
        //TODO : Get students information from input.txt
        Student stu = Student();
        stu.student_id = id;
        stu.name = name;
        stu.age = age;
        students.push_back(stu);
    }

    ofstream outFile("output.txt");

    if (!outFile.is_open()) {
        cerr << "Unable to open output file." << endl;
        return 1;
    }

    //TODO : Write output.txt
    outFile << "Sort by ID (descending):" << endl;
    sort(students.begin(), students.end(), compareByIdDescending);
    printStudentsToFile(students, outFile);

    outFile << "Sort by Name (descending):" << endl;
    sort(students.begin(), students.end(), compareByNameDescending);
    printStudentsToFile(students, outFile);

    outFile << "Sort by Age (descending):" << endl;
    sort(students.begin(), students.end(), compareByAgeDescending);
    printStudentsToFile(students, outFile);

    outFile << "Sort by ID (ascending):" << endl;
    sort(students.begin(), students.end(), compareByIdAscending);
    printStudentsToFile(students, outFile);

    outFile << "Sort by Name (ascending):" << endl;
    sort(students.begin(), students.end(), compareByNameAscending);
    printStudentsToFile(students, outFile);

    outFile << "Sort by Age (ascending):" << endl;
    sort(students.begin(), students.end(), compareByAgeAscending);
    printStudentsToFile(students, outFile);
    // std::cout << "asdf" << std::endl;


    inFile.close();
    outFile.close();

    //This line is for scoring DO NOT REMOVE THIS LINE
    verifyOutputFile(fileName, "output.txt");

    //This function is for checking output.txt.
    printOutput("output.txt");


    return 0;
}
