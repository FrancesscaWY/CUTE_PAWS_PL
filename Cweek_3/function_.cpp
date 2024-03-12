#include <iostream>
using namespace std;
int sum(int a,int b=9);
int main(){
    int x=10,y=20;
    cout << sum(x,y) << endl;
    cout << sum(x) <<endl;
    return 0;
}
int sum(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
// Created by 86138 on 2024/3/12.
//
