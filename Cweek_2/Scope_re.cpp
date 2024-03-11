#include <iostream>
using namespace std;
int value=5;
int main(int argc,char *argv[]){
    int value=0;
    cout <<::value<<endl;//全局变量
    cout<<value<<endl;//局部变量
    return 0;
}
// Created by 86138 on 2024/3/10.
//
