#include <iostream>
using namespace std;
int main(){
    int i=10;
    double j=12.11;
    i=(j++,j+100,j+90);
    cout <<i << endl;
    int c;
    c= int(j);//强制类型转换
    cout << c << endl;
    double x =0.4;
    int r=10;
    int y;
    y= static_cast<int>(x);
    cout << y << endl;
    int *z=&r;
    cout << *z << endl;
    reinterpret_cast<int>(r);
    cout << r << endl;
    cout << &r << endl;
    cout << z << endl;
    return 0;
}

// Created by 86138 on 2024/3/12.
//
