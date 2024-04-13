#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    double sum=0;
    double i=1;
    while(1){
        sum +=1/i;
        i++;
        if(sum>k){
            cout << i-1 << endl;
            break;
        }
    }
    return 0;
}
//
// Created by 86138 on 2024/4/13.
//
