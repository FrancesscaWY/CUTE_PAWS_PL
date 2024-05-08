#include <iostream>
#include <string>

using namespace std;

class ExamINfo {
public:
    //三种构造函数，分别用于不同的情况，初始化成员变量，方便后续使用，减少代码量，提高代码可读性，便于维护，减少错误
    ExamINfo(string Name, char Grade)
            :
            name(Name), mode(GRADE), grade(Grade) {}

    ExamINfo(string Name, bool Pass)
            :
            name(Name), mode(PASS), pass(Pass) {}

    ExamINfo(string Name, int Percent)
            : name(Name), mode(PERCENT), percent(Percent) {}

    void show();

private:
    string name;
    enum {
        GRADE,
        PASS,
        PERCENT
    } mode;
    union {
        char grade;
        bool pass;
        int percent;
    };
};

void ExamINfo::show() {
    cout << name << ": ";
    switch (mode) {
        case GRADE:
            cout << grade;
            break;
        case PASS:
            cout << (pass ? "PASS" : "FAIL");
            break;
        case PERCENT:
            cout << percent;
            break;
    }
    cout << endl;
}

int main() {
    ExamINfo course1("C++", 'A');
    ExamINfo course2("Java", true);
    ExamINfo course3("Python", 90);
    ExamINfo course4("C", false);
    course1.show();
    course2.show();
    course3.show();
    course4.show();
    return 0;
}



//
// Created by 86138 on 2024/5/7.
//
