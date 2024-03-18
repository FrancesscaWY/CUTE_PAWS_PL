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
class B: private A{
public:
    int a;
    B(int i){
        A();
        a=i;
    }
    void fun(){
        cout << a << endl;
        cout << a1 << endl;
        cout << a2 << endl;//private 继承:public、protected 变为private类型在派生类中可访问，在外部不能访问
//        cout << a3 << endl; //protected 继承后分别为protected、protected、 private（派生类和外部均不能访问）
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
