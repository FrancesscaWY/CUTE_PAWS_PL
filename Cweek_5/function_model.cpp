#include <iostream>
#include <string>
using namespace std;
template <typename T>
inline T const& MAX(T const& a,T const& b){
    return a<b?b:a;
}
int main(){
    int i=9;
    int j=29;
    cout << "MAX(i,j): " << MAX(i,j) << endl;

    double f1=3.14159;
    double f2=5.667;
    cout << "MAX(f1,f2): " << MAX(f1,f2) << endl;

    string s1="hello";
    string s2="welcome";
    cout << "MAX(s1,s2): " << MAX(s1,s2) << endl;

    return 0;
}
// Created by 86138 on 2024/3/30.
//


