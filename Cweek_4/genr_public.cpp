#include <iostream>
#include <assert.h>
using namespace std;
class A{
public:
    int a;
    A(){
        a1=1;
        a2=2;
        a3=3;
        a=4;
    }
    void fun(){
        cout << a << endl;
        cout << a1 << endl;
        cout << a2 << endl;
        cout << a3 << endl;
    }
public:
    int a1;
protected:
    int a2;
private:
    int a3;
};
class B:public A{
public:
    int a;
    B(int i){
        A();
        a=i;
    }
    void fun(){
        cout << a << endl;
        cout << a1 << endl;
        cout << a2 << endl;
       // cout << a3 << endl;//派生类不可访问private定义元素
    }
};
int main(){
    B b(10);
    b.fun();
    system("pause");
    return 0;
}
// Created by 86138 on 2024/3/18.
//
