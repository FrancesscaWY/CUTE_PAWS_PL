#include <iostream>
using namespace std;
int main(){
    int n1,n2,hcf,temp,lcm;
    cin >> n1 >> n2;

    hcf=n1;
    temp=n2;
    if(hcf>temp){
        hcf-=temp;
} else{
        temp-=hcf;
    }

    lcm=(n1*n2)/hcf;
    cout << "LCM: " << lcm;
    return 0;
}
//
// Created by 86138 on 2024/4/3.
//
