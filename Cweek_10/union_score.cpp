#include <iostream>
#include <string>

using namespace std;

class ExamInfo {
    //构造函数重载
    ExamInfo(string name, char grade)
            : name(name), grade(grade) {}

    ExamInfo(string name, bool pass)
            : name(name), pass(pass) {}

    ExamInfo(string name, int score)
            : name(name), score(score) {}

    void show();

private:
    string name;
    union {
        char grade;
        bool pass;
        int score;
    };
};
//
// Created by 86138 on 2024/5/2.
//
