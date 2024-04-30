#include <iostream>
using namespace std;
double power(double x,int n){
    double val=1.0;
    while(n--){
        val*=x;
    }
    return val;
}
int main(){
    int x,n;
    cin >> x >> n;
    cout << power(x,n) << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
