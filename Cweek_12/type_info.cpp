#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    const char* a;
    int x;
    int *i=reinterpret_cast<int*>(&a);//reinterpret_cast用于转换指针或引用的类型，但是不检查转换的安全性
    const string s="Hello,world!";
    string ss=const_cast<string&>(s);//const_cast用于去除指针或引用的const属性
    //dynamic_cast用于转换指针或引用的类型，如果转换失败，则返回nullptr
//    dynamic_cast<string&>(s);,dynamic_cast只能用于多态类型的转换，而不能用于非多态类型的转换 ,所以这里会报错
    const type_info& ti1=typeid(a);
    const type_info& ti2=typeid(x);
    cout << ti2.name() << endl;
    cout << ti1.name() << endl;
    return 0;
}

//
// Created by 86138 on 2024/5/16.
//
