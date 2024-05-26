#include <iostream>
using namespace std;
template <int N>
class Factorial{
public:
    static const int value=N*Factorial<N-1>::value;
};
template<>
class Factorial<0>{
public:
    static const int value=1;
};
int main(){
    Factorial<4> f;
    cout << f.value << endl;
    return 0;

}
//
// Created by 86138 on 2024/5/26.
//
