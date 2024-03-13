#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a=10;
    int b=-20;
    double c=5.0890;
    short d=30;
    long e=-2000000000;
    float f=-4.45;
    cout << cos(c) << endl;
    cout << sin(c) << endl;
    cout << tan(c) << endl;
    cout << log(c) << endl;
    cout << log10(c) << endl;
    cout << exp(c) << endl;//e^c
    cout << sqrt(c) << endl;
    cout << pow(a,2) << endl;
    cout << hypot(3,4) << endl;
    cout << abs(b) << endl;
    cout << labs(e) << endl;//long abs value of e
    cout << fabs(f) << endl;
    cout << ceil(c) << endl;//向上取整
    cout << floor(c) << endl;//向下取整
    cout << fmod(f,2) << endl;//求余数
    cout << modf(c,&c) << endl;//返回小数部分
    cout << ldexp(c,2) << endl;//c*2^2
    return 0;

}//
// Created by 86138 on 2024/3/13.
//
