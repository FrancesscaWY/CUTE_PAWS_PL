#include <iostream>
using namespace std;
int main(){
    int i=10;
    char str[]="error is happening";
    cerr << "Error message:" << str << endl;
    clog << "Error message:" << str << endl;//clog和cerr的区别在于clog是缓冲的，cerr是非缓冲的
    return 0;
}
// Created by 86138 on 2024/3/16.
//
