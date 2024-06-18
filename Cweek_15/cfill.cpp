#include <iostream>
using namespace std;

int main(){
    cout.fill('*');
    cout.width(6);
    cout.fill('#');
    //为什么不打印'*'，而是打印'#'？，因为fill()函数只对下一个输出有效
    cout<<123;
    char *y = "hello";//定义一个字符串型指针，指向字符串常量，字符串常量是一个字符数组，数组名是一个指针常量，指向数组的首地址
//    char y="hello";//定义一个字符型变量，赋值为'h'，但是'hello'是一个字符串常量，不能赋值给字符型变量
    cout << y << endl;
    char x[80];
    cin.getline(x,80);
    //getline()函数读取一行字符，遇到回车结束，回车不会存储到数组中
    cout << x << endl;
    return 0;
}
//
// Created by 86138 on 2024/6/8.
//
