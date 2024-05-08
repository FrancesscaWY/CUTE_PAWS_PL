#include <iostream>
using namespace std;
int i;//全局变量
namespace Ns{//命名空间
    int j;
}
int main(){
    i=5;
    Ns::j=8;
    {//局部作用域
        using namespace Ns;
        int i;//此时的i是局部变量，不是全局变量
        i=7;
        cout << i << endl;
        cout << j << endl;
    }
    cout << i << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
