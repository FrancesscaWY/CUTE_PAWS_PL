#include <iostream>
using namespace std;
double arctan(double x){
    double sqr=x*x;
    double e=x;
    double result=0;
    int i=1;
    while(e/i>1e-6){
        double f=e/i;
        result=(i%4==1)?result+f:result-f;
        e=e*sqr;
        i+=2;
    }
    return result;
}
int main(){
//    int n;
//    cin >> n;
//    cout << arctan(n) << endl;
    double a=16.0*arctan(1/5.0);
    double b=4.0*arctan(1/239.0);
    cout << "PI : " << a-b << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
