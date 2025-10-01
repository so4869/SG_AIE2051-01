#include <cstdio>

using namespace std;

//
class Student{
public:
    Student(){}
    Student(int mathsc, int engsc){
        mathscore = mathsc;
        englishscore = engsc;
    }

    bool operator<(Student x){
        if ( mathscore < x.mathscore)
            return true;
        else if ( mathscore == x.mathscore &&  englishscore < x.englishscore )
            return true;
        else return false;
    }

    Student operator+(Student x){
        Student c;
        c.mathscore = mathscore + x.mathscore;
        c.englishscore = englishscore + x.englishscore;
        return c;
    }

    void print(){
        printf("math:%d eng:%d\n", mathscore, englishscore);
    }


private:
    int mathscore, englishscore;
};


int main(){

    Student A(100, 80), B(80, 60), C( 100, 70);

    if (B < A)
        printf("B < A\n");
    if (C < A)
        printf("C < A\n");
    if (A < B + C )
        printf("A < B+C\n");

    int a=10, b=20;

    C = A.operator+(B);
    C.print();
    C = A+(B);
    C.print();

    return 0;
}