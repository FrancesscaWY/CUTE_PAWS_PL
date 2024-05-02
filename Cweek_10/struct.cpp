#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct student{
    int num;
    string name;
    char sex;
    int age;
};
int main(){
    student stu1={97001,"Wang",'M',18};
    student stu2={97002,"Li",'F',19};
    cout << "No.:" << stu1.num << endl;
    cout << "Name:" << stu1.name << endl;
    cout << "Sex:"  << stu1.sex << endl;
    cout << "Age:"  << stu1.age << endl;
    cout << endl;
    cout << "No.:" << stu2.num << endl;
    cout << "Name:" << stu2.name << endl;
    cout << "Sex:" << stu2.sex << endl;
    cout << "Age:" << stu2.age << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/2.
//
