#include <iostream>
using namespace std;
int i=1;
void other(){
    static int a=3;//静态生命周期，只初始化一次，下次调用时不再初始化，保留上次的值，只在本文件中有效
    static int b;
    int c=10;
    a+=2;
    i+=32;
    c+=5;
    cout << "----OTHER----" << endl;
    cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    b=a;
}
int main(){

    static int a=10;//（无效初始化）静态变量只初始化一次，下次调用时不再初始化，保留上次的值
    int b=-10;
    int c=0;
    cout << "----MAIN----" << endl;
    cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    c+=8;
    //a,b为静态变量，只初始化一次，下次调用时不再初始化，保留上次的值
    other();
    cout << "----MAIN----" << endl;
    cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    i+=10;
//    a=20;//静态变量只初始化一次，下次调用时不再初始化，保留上次的值
    cout << a << endl;
    other();
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
