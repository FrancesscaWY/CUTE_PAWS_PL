#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    int i=0,j=1;
    int &r=i;//引用,引用是变量的别名，引用必顚初始化，引用不是对象，而是对象的别名，引用不占用内存空间
    //为什么引用不占用内存空间，因为引用是变量的别名，引用的地址和被引用的变量的地址是一样的
    char Mystring[12]="hello,world";//为什么只被赋值，未被访问，但是没有报错，因为Mystring是一个字符数组，而不是一个字符串
    const char* a;
    int x;
    int *p=reinterpret_cast<int*>(&a);//reinterpret_cast用于转换指针或引用的类型，但是不检查转换的安全性
    const string s="Hello,world!";
    string ss=const_cast<string&>(s);//const_cast用于去除指针或引用的const属性
    //dynamic_cast 类指针 用于转换指针或引用的类型，如果转换失败，则返回nullptr
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
