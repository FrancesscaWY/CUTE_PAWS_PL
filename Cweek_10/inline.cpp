#include <iostream>
using namespace std;
const double PI=3.14159265358979323846;
inline double calArea(double r){
    return PI*r*r;
}
int main(){
    double r;
    cin >> r;
    double area=calArea(r);
    cout << area << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
