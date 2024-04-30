#include <iostream>
#include <vector>
using namespace std;
int main(){
    typedef int num,age,year;
    num a;
    age b;
    vector <age> c(3);
    year d;
    cin >> a >> b >> c[0] >> c[1] >> c[2] >> d;
    cout << a << " " << b << endl;
    cout << c[0] << " " << c[1] << " " << c[2] << endl;
    cout << " " << d << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/23.
//
