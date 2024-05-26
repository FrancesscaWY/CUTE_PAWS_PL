#include <iostream>
using namespace std;
template <class T>
T add(T a,T b){
    return a+b;
}
template <typename T,int size>
class Array{
public:
    void set(int index,T value){
        if(index>=0&&index<size){
            arr[index]=value;
        }
    }
     T get(int index)const{
        if(index>=0&&index<size){
            return arr[index];
        }
        return T();//返回一个默认值,默认值是0
    }
private:
    T arr[size];
};
template <typename TT>
class Box{
private:
    TT value;
public:
    Box(TT value):value(value){};
    TT getValue()const{
        return value;
    }
};
int main(){
    int x=1,y=4;
    cout << add(x,y) << endl;
    cout << add(1.2,3.4) << endl;
    cout << add('s','t') << endl;
    Array<int,5>arr2;
    Box<int>bb(3);
    cout << bb.getValue() << endl;
    Box<string>str("hello");
    cout << str.getValue() << endl;
    arr2.set(0,1);
    arr2.set(3,4);
    cout <<arr2.get(0) << endl;
    cout << arr2.get(3) <<endl;
    cout << arr2.get(5) << endl;

    return 0;
}
//
// Created by 86138 on 2024/5/26.
//
