#include <iostream>
using namespace std;
void printStuff(float){
    cout <<"This is a print stuff function" << endl;
}
void printMessage(float data){
    cout << "This data to be listed is " << data << endl;
}
void printFloat(float data){
    cout << "This float data to be listed is " << data << endl;
}
const float PI = 3.14159;
const float Two_PI= PI * 2.0f;//2π,为什么是2.0f而不是2？，因为2.0f是浮点数，2是整数
int main(){
    void (*pPrint)(float);
    pPrint = printMessage;
    pPrint(PI);
    cout <<"======================" << endl;
    pPrint =printStuff;
    pPrint(Two_PI);
    cout <<"======================" << endl;
    pPrint=printFloat;
    pPrint(PI);
    pPrint(1.2222);
    return 0;
}
//
// Created by 86138 on 2024/5/14.
//函数指针
