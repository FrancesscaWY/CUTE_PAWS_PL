#include <iostream>
using namespace std;
int main(){
    int x=3;
    double a=3.1234;
    float b=3.1234;
    if(a-b<1e-6){
        cout << "a==b" << endl;
    }else{
        cout << "a!=b" << endl;
    }
    //为什么当a，b为整数时就相等，为浮点数时就不相等，这是因为浮点数的精度问题，浮点数在计算机中是以二进制存储的，而二进制是无法精确表示十进制的小数的，所以在计算机中浮点数是不精确的，所以在比较浮点数时，不能直接用==来比较，而是要判断两个浮点数之差的绝对值是否小于一个很小的数，这个数一般称为精度，比如1e-6，1e-7等等。
    if(x=5){
        cout << ++x << endl;
    }else{
        cout << x << endl;
    }
    for(int i=0,j=0;!j&&i<=5;i++){
        cout << i << endl;
    }

    return 0;
}

//
// Created by 86138 on 2024/5/21.
//
