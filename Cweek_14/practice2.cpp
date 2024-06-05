//
// Created by 86138 on 2024/5/30.
//
#include <iostream>
using namespace std;
class Person{
protected:
    string m_nam;//protected成员变量
    int m_age;
public:
    Person(string name,int age){};
};
int main(){
    Person p("Tom",32);
}
