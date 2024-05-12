#include <iostream>
//#include <utility>
using namespace std;

class Employee {
public:
    Employee();
    ~Employee() = default;
    void setInformation(string name, string address, string city, string postal_code);
    void Display();

private:
    string Name;
    string Address;
    string City;
    string Postal_code;
};

Employee::Employee() {
    Name = " ";
    Address = " ";
    City = " ";
    Postal_code = " ";
}

void Employee::setInformation(string name, string address, string city, string postal_code) {
    Name = std::move(name);//std::move()函数可以将一个左值转换为右值引用,这样可以避免不必要的内存拷贝,提高效率
    Address = std::move(address);
    City = std::move(city);
    Postal_code = std::move(postal_code);
}

void Employee::Display() {
    //如何将属性制表输出
    cout << "Name: " << Name << endl;
    cout << "Address: " << Address << endl;
    cout << "City: " << City << endl;
    cout << "Postal_code: " << Postal_code << endl;
}

int main() {
    Employee A;
    cout << "调用构造函数初始化Employee类的对象A为空值"<<endl;
    A.Display();
    cout << endl;
    A.setInformation("Tom", "清源路19号","北京","100084");
    cout << "调用setInformation函数修改Employee类的对象A的信息"<<endl;
    A.Display();
    cout << endl;
    cout << "hello" << endl;
    cout << "调用setInformation函数改变对象A的Name属性，其他属性保持不变"<<endl;
    A.setInformation("Jerry", "清源路19号","北京","100084");
    A.Display();
    Employee B;
//    cout << "调用构造函数初始化Employee类的对象B为空值"<<endl;
//    B.Display();
//    cout << endl;
    B.setInformation("Alice", "","北京","");
    cout << "调用setInformation函数修改Employee类的对象B的Name属性和City属性"<<endl;
    B.Display();
    cout << "hello" << endl;
    cout << endl;
    cout << "调用setInformation函数赋值对象B的Postal_code属性，其他属性保持不变"<<endl;
    B.setInformation("Alice", "","北京","100084");
    B.Display();
    string a,b,c,d;
    cout << "请输入Name Address City Postal_code: "<<endl;
    cin >> a >> b >> c >> d;
    Employee C;
    C.setInformation(a,b,c,d);
    C.Display();
    return 0;
}
//
// Created by 86138 on 2024/5/5.
//
