#include <iostream>
using namespace std;
class A{
public:
    const int x=9;
//    int a[x];//error //const 定义类内部常量不能直接初始化
    A(int y);
};
A::A(int y):x(y){//构造函数初始化列表
    cout << x << endl;
}

int main(){
    A a(8);
    return 0;
}









//#include <iostream>
//using namespace std;
//int main(){
//    int x=9;
//    int *const p=&x;
//    cout << *p << endl;
//    cout << p << endl;
//    int y=8;
//    //p=&y;//error//修改指针指向的地址
//    *p=y;//直接修改指针指向的值
//    cout << *p << endl;
//    cout << p <<endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main(){
//    float a=0.6;
//    float const *p = &a;
//    cout << *p <<endl;
//    cout << p << "\n" << endl;
////    *p = 0.8;//直接修改指针指向的值
////    cout << *p << endl;//error
//    float b=0.9;
//    p = & b;//修改指针指向的地址
//    cout << *p << endl;
//    cout << p << endl;
//}
