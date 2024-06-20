#include <iostream>
using namespace std;
class Person{
protected:
    string name;
    int age;
    enum sex{
        Female,Male
    };
public:
    Person(string m_name,int m_age,enum sex):
            name(m_name),age(m_age){}
};
class Employee:public Person{
private:
    string department;
    int salary;
public:
    Employee(string m_name,int m_age,enum sex,string m_department,int m_salary):
            Person(m_name,m_age,),department(m_department),salary(m_salary){}
    void display(){
        cout << "下面是该Emplyee的信息：" << endl;
        cout << "姓名：" << this->name << endl;
        cout << "年龄：" << this->age << endl;
        cout << "性别：" << this->sex << endl;
        cout << "部门：" << this->department << endl;
        cout << "薪水：" << this->salary << endl;
    }
};
int mian(){
    Employee employee1("Bob",35,"Male","Mnange",3000);
    employee1.display();
    return 0;
}
//
// Created by 86138 on 2024/6/20.
//
