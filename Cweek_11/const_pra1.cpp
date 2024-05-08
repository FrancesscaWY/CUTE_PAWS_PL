#include <iostream>
using namespace std;
class R{
public:
    R(int r1,int r2):R1(r1),R2(r2){}
    void Print();
    void Print() const;
private:
    int R1,R2;
};
void R::Print(){
    cout << R1 << "," << R2 << endl;
}
void R::Print() const{
    cout << R1 << "," << R2 << endl;
}
int main(){
    R a(5,4);
    a.Print();
    const R b(20,10);
    b.Print();
    return 0;
}
//常量对象调用常函数
//
// Created by 86138 on 2024/5/8.
//
