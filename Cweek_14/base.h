//
// Created by 86138 on 2024/5/30.
//
#include <string_view>
#include <iostream>

using namespace std;
//string_view是一个轻量级的字符串视图，它不拥有字符串的内存，只是提供了一种访问字符串的方式。
#ifndef CWEEK_14_BASE_H
#define CWEEK_14_BASE_H

class Base {
protected:
    int m_value{};
public:
    Base(int value) : m_value(value) {};

    void getName() const {
        cout << "Base" << endl;
    }

    int getValue() const { return m_value; }
};
class Derived:public Base{
public:
    Derived(int value):Base{value}{
        //为什么这里可以为空？，因为基类的构造函数已经初始化了m_value
    }
    ~Derived()=default;
    void getName() const{
        cout << "Derived" << endl;
    }
    int getValueDoubled() const{
        return m_value*2;
    }
};
#endif //CWEEK_14_BASE_H
