#include <iostream>
using namespace std;

int main ()
{
    double* point  = NULL; // 初始化为 null 的指针
    point  = new double;   // 为变量请求内存

    *point = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *point << endl;

    delete point;         // 释放内存

    return 0;
}
// Created by 86138 on 2024/3/29.
//
