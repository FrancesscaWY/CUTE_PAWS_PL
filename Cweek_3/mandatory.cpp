#include <iostream>
using namespace std;

class A {
public:
    virtual void f(){} // 添加 public 访问修饰符，以使函数可访问
};
int main() {
    int a;
    A* pA = new A;
    void* pv = dynamic_cast<void*>(pA); // 向上转型
    cout << typeid(pA).name() << endl; // 输出指针类型的名称
    cout << typeid(a).name() << endl;  // 输出变量类型的名称
    cout << pv << endl;  // 输出 pv 的值，这是转换后的指针

    A* pA2 = static_cast<A*>(pv); // 向下转型，将 pv 转换回 A* 类型，并赋值给 pA2
    cout << typeid(pv).name() << endl;  // 输出 pv 的类型信息
    double d = static_cast<double>(a); // 将整数 a 转换为 double 类型，并赋值给 d
    cout << typeid(d).name() << endl;  // 输出变量 d 的类型信息
    cout << pv << endl;  // 输出 pv 的值，仍然是转换后的指针

    delete pA;  // 释放动态分配的内存
    return 0;
}

//viod 转型
//#include <iostream>
//using namespace std;
//class A{virtual void f(){}};
//int main(){
//    int a;
//    A *pA= new A;
//    void *pv=dynamic_cast<void *>(pA);//向上转型
//    cout << typeid(pA).name() << endl;
//    cout << typeid(a).name()  << endl;
//    cout << pv << endl;
//    static_cast <A*>(pv);//向下转型
//    cout << typeid(pv).name() << endl;
//    double d=static_cast <double>(d); //为什么转换不了
//    cout << typeid(d).name() << endl;
//    cout << pv << endl;
//    return 0;
//}

//继承中的转型
//#include <iostream>
//using namespace std;
//class A{virtual viod f(){}; };
//class B:public A{ };
//int main(){
//
//    A *pA=new B;//向上转型
//    B *pB= dynamic_cast<B*>(pA);//向下转型
//    cout << "success" << endl;
//}

// Created by 86138 on 2024/3/12.
//
