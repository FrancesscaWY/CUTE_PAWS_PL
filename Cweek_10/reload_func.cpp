#include <iostream>
using namespace std;
int Sum_Sq(int a,int b){
    return a*a+b*b;
}
double Sum_Sq(double a,double b){
    return a*a+b*b;
}
int main(){
    int x,y;
    cin >> x >> y;
    cout << Sum_Sq(x,y) << endl;
    double m,n;
    cin >> m >> n;
    cout << Sum_Sq(m,n) << endl;
    return 0;
}

//
// Created by 86138 on 2024/4/30.
//
