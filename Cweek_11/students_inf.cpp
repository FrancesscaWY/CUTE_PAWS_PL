#include <iostream>

using namespace std;
enum Level {
    FRESHMAN, SOPHOMORE, JUNIOR, SENIOR
};
enum Grade {
    A, B, C, D
};

class Student {
public:
    Student(unsigned number, Level level, Grade grade)
            : Number(number), Level(level), Grade(grade) {};

    void show();

private:
    unsigned Number: 27;//位域，表示学号，占27位，最大值为134217727 2^27-1
    //位域的作用是为了节省内存，提高数据存取速度，原理是将多个数据存储在一个字节中
    Level Level: 2;
    Grade Grade: 2;
};

void Student::show() {
    cout << "NUMBER: " << Number << endl;
    cout << "LEVEL: ";
    switch (Level) {
        case FRESHMAN:
            cout << "FRESHMAN" << endl;
            break;
        case SOPHOMORE:
            cout << "SOPHOMORE" << endl;
            break;
        case JUNIOR:
            cout << "JUNIOR" << endl;
            break;
        case SENIOR:
            cout << "SENIOR" << endl;
            break;
    }
    cout << endl;
    cout << "GRADE: ";
    switch(Grade){
        case A:
            cout << "A" << endl;
            break;
        case B:
            cout << "B" << endl;
            break;
        case C:
            cout << "C" << endl;
            break;
        case D:
            cout << "D" << endl;
            break;
    }
    cout << endl;
}
int main(){
    Student student(20210001, FRESHMAN, A);
    student.show();
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
