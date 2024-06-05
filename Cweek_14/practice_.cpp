#include <iostream>
using namespace std;
int main(){
    int x(5); //直接初始化
    int t{2}; //括号初始化
    int y=4;  //拷贝初始化
    cout << x << t << y << endl;
    cout << "Hello, World!" << '\n'; //输出Hello, World!并换行
    cout << "Hello, World!\n" ;//输出Hello, World!并换行
    cout << "Hello, World!"
            "Hello, World!" << endl; //correct
    return 0;
}
//
// Created by 86138 on 2024/5/29.
//
