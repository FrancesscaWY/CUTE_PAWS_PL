#include <iostream>
using namespace std;
class A{
public:
    A(int i):rl(i){ }
    void print(){
        cout << 'E' << rl << '-';
    }
    void print() const{
        cout << 'C' << rl << '-';
    }
private:
    int rl;
};
int main(){
     A a1(2);
    const A a2(4);
    a1.print();
    a2.print();
    return 0;
}
//
// Created by 86138 on 2024/4/2.
//
