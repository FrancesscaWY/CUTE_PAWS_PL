#include <iostream>
using namespace std;
bool symn(unsigned int n){
    unsigned int i=n;
    unsigned int m=0;
    while(i){
        m=m*10+i%10;
        i=i/10;
    }
    return m==n;
}
int main(){
    for(unsigned m=11;m<1000;m++){
        if(symn(m)&&symn(m*m)&&symn(m*m*m)){
            cout << m << endl;
            cout << m*m << endl;
            cout << m*m*m << endl;
        }
    }
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
