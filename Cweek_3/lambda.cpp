#include <iostream>
#include <functional>
using namespace std;
class A{
public:
    void output(int x,int y) {
        //类中的lambda表达式定义
//        auto x1 = [] { return m_n};//错误，没有捕获外部变量，不能使用类成员 m_n
          auto x2 =[=]{return m_n+x+y;};//正确，通过拷贝捕获所有变量
          auto x3=[&]{return m_n+x+y;};//正确，通过引用捕获所有变量
          auto x4=[this]{return m_n;};//正确，捕获 this 指针，可访问类内部成员
//          auto x5=[this]{return m_n+x+y;};// 错误，捕获 this 指针，可访问类内部成员，没有捕获到变量 x，y，因此不能访问。
          auto x6=[this,x,y]{return m_n+x+y;};//正确，捕获 this 指针，同时拷贝 x，y
          auto x7=[this]{return m_n++;};//正确，捕获 this 指针，可访问类内部成员
    }
    int m_n=10;
};
int main(){
    //参数确定的lambda表达式定义
    int a=9,b=8;
//    auto f1=[]{return a+b;};//错误，没有捕获外部变量，不能使用 a，b
    auto f2=[&]{return a++;};//正确，通过引用捕获所有变量,可写
//    auto f3=[=]{return a++;};//错误，通过拷贝捕获所有变量，不可写
    auto f8=[=]()mutable{return a++;};//mutable 更改const属性
    auto f5=[=]{return a+b;};
//    auto f4=[a]{return a+b;};//错误，未捕获外部变量 b
    auto f6=[a,&b]{return a+(b++);};//正确，通过拷贝捕获 a，通过引用捕获 b
    auto f7=[=,&b]{return a+(b++);};//正确，通过拷贝捕获 a，通过引用捕获 b
    cout << f2() << endl;
    cout << f5() << endl;
    cout << f6() << endl;
    cout << f7() << endl;
    cout << f8() << endl;

    //对函数的包装（存储）和绑定
    std::function<int(int)>ff1=[](int a){return a+1;};//包装可调用函数
    std::function<int(int)> gg2=bind([](int a){return a+1;},placeholders::_1);//使用 bind 绑定参数
    cout << ff1(10) << endl;
    cout << gg2(29) << endl

    //对于没有捕获到变量的lambda表达式，可以转换为函数指针
    using func_ptr= int(*)(int);//定义函数指针类型
    func_ptr ff3=[](int a){
        return a;
    };
    cout << ff3(10) << endl;
    return 0;
}
// Created by 86138 on 2024/3/12.
//
