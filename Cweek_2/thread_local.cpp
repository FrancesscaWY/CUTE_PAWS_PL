#include <iostream>
#include <vector>
thread_local int x;//每个线程都有一个自己的x
class X
{
    static thread_local std::string s;//每个线程都有一个自己的s
};
thread_local std::string X::s;
void foo(){
    thread_local std::vector<int> v;//每个线程都有一个自己的v
}
int main(){
    x=1;
    x=2;
    x=3;
    x=4;
    x=5;
    x=6;
    x=7;
    x=8;
    x=9;//前面的x随当前线程的摧毁而消失
    std::cout<<x<<std::endl;
    x=10;//每个线程都有一个自己的x
    std::cout<<x<<std::endl;
    x=1;
    std::cout<<x<<std::endl;
    std::cout<<"successful!"<<std::endl;
    return 0;
}
// Created by 86138 on 2024/3/10.
//
