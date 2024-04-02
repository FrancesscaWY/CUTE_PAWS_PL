#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,x1,x2,delta,realPart,imaginaryPart;
    cin >> a >> b >> c;
    delta=b*b-4*a*c;
    if(delta>0){
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << " and x2 = " << x2 << endl;
    }else if(delta==0){
        x1=-b/(2*a);
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }else{
        realPart=-b/(2*a);
        imaginaryPart=sqrt(-delta)/(2*a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i and x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
}

//
// Created by 86138 on 2024/4/2.
//
