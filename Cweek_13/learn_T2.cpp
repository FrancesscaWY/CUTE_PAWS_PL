#include <iostream>
using namespace std;
template <class T>
class Box{
public:
    Box(T value):value(value){};
    T getValue() const{
        return value;
    }
private:
    T value;
};
template<>
class Box<char>{
public:
    Box(char value):value(value){};
    char getValue() const{
        return value;
    }
private:
    char value;
};
template<typename T,typename U>
class Pair{
public:
    Pair(T first,U second):first(first),second(second){};
    T getFirst() const{
        return first;
    }
    U getSecond() const{
        return second;
    }
private:
    T first;
    U second;
};
template <typename T>
class pair<T,T>{
public:
    pair(T first,T second):first(first),second(second){};
    T getfirst()const{
        return first;
    }
    T getSecond()const{
        return second+1;
    }
private:
    T first;
    T second;
};
int main(){
    Box<int> x(23);
    Box<bool> T(true);
    cout << x.getValue() << endl;
    cout << T.getValue() << endl;
    Pair<int,double> p(3,4.5);
    cout << p.getFirst() << endl;
    cout << p.getSecond() << endl;
    pair<int,int> pp(3,4);
    cout << pp.getfirst() << endl;
    cout << pp.getSecond() << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/26.
//
