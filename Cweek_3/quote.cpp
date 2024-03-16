#include <iostream>
using namespace std;
int main(){
    int i=10;
    int& j=i;
    double x=68.777;
    double& y=x;
    cout << "i=" << i << " j=" << j << endl;
    j=100;
    cout << "i=" << i << " j=" << j << endl;
    cout << "x=" << x << " y=" << y << endl;
    y=100.0;
    cout << "x=" << x << " y=" << y << endl;
    return 0;
}
// Created by 86138 on 2024/3/16.
//
