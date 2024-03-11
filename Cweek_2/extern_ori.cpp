#include <iostream>
using namespace std;
int count;
extern void write_extern();//声明外部函数
int main(){
    count =4;
    write_extern();
    system("pause");
    return 0;
}

// Created by 86138 on 2024/3/10.
//
