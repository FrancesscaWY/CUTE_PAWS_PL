#include <iostream>
#include <iomanip>
using namespace std;
void fiddle(int x,int &y){
    x=x+1;
    y=y+2;
    cout << "The values are:";
    cout << setw(5) << x;
    cout << setw(5) << y << endl;
}
int main(){
    int a=5,b=10;
    cout << "The values are:";
    cout << setw(5) << a;
    cout << setw(5) << b << endl;
    fiddle(a,b);
    cout << "The values are:";
    cout << setw(5) << a;
    cout << setw(5) << b << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
