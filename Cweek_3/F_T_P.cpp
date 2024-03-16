#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *get_Random(){
    static int r[7];
    srand((unsigned)time(NULL));
    for(int i=0;i<7;i++){
        r[i]=rand();
        cout << r[i] << endl;
    }
    return r;//返回地址
}
int main(){
    int *p;
    p=get_Random();//从函数传回的是地址，所以要用指针来接收
    for(int i=0;i<7;i++){
        cout << *(p+i) << endl;//输出地址中的值
    }
    return 0;
}


// Created by 86138 on 2024/3/16.
//
