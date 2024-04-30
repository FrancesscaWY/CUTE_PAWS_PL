#include  <iostream>
using namespace std;
double power(double x,int n){
    double val=1.0;
    while(n--) {
        val *= x;
    }
    return val;
}
int main(){
    char c[8];
    cin >>c;
    int value=0;
    for(int i=7;i>=0;i--){
//        cout << c[i] << " ";
        if(c[i]=='1'){
            value+=static_cast<int>(power(2,7-i));
        }
    }
    cout << "Decimal value is" << value << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
