#include <iostream>
using namespace std;

class Employee {
public:
    Employee();//构造函数
    ~Employee() = default;//析构函数
    void setInformation(string name, string address, string city, string postal_code);//setInformation函数声明
    void Display();//Display函数声明

private://私有成员属性
    string Name;
    string Address;
    string City;
    string Postal_code;
};

Employee::Employee() {//构造函数，初始化为空值
    Name = " ";
    Address = " ";
    City = " ";
    Postal_code = " ";
}
//setInformation函数定义，设置Employee类的对象的属性信息
void Employee::setInformation(string name, string address, string city, string postal_code) {
    Name = std::move(name);
    Address = std::move(address);
    City = std::move(city);
    Postal_code = std::move(postal_code);
}
//Display函数定义，输出Employee类的对象的属性信息
void Employee::Display() {
    //如何将属性制表输出
    cout << "Name: " << Name << endl;
    cout << "Address: " << Address << endl;
    cout << "City: " << City << endl;
    cout << "Postal_code: " << Postal_code << endl;
}

int main() {
    Employee A;//创建Employee类的对象A，初始化为空值
    cout << "-----调用构造函数初始化Employee类的对象A为空值-----"<<endl;
    A.Display();//输出Employee类的对象A的属性信息
    cout << endl;
    //调用setInformation函数设置Employee类的对象A的信息
    A.setInformation("Tom", "清源路19号","北京","100084");
    cout << "-----调用setInformation函数设置Employee类的对象A的信息-----"<<endl;
    A.Display();
    return 0;
}
//
// Created by 86138 on 2024/5/5.
//
