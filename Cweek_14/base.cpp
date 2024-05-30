#include <iostream>
#include "base.h"
using namespace std;
int main(){
    Derived d{5};
    d.getName();
    Derived& d2{d};//引用
    d2.getName();
    Derived *p{&d};//指针
    p->getName();
    p.getName();
}
//
// Created by 86138 on 2024/5/30.
//
