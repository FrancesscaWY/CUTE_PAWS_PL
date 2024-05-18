#include <iostream>

using namespace std;

class MyException {
public:
    MyException(const string &message):message(message){ }
    ~MyException();
    const string &getMessage() const {return message;}
private:
    string message;
};
class Demo{
public:
    Demo(){cout << "Constructor of Demo"<< endl;}
    ~Demo(){cout << "Destructor of Demo" << endl;}
};
void fun()throw (MyException){
    Demo d;
    cout << "Throw MyException in func()"<< endl;
    throw MyException("exception throw by fun()");
}
int main(){
    cout << "In main function " << endl;
    try{
        fun();
    }catch(MyException& e){
     cout << "Caught an exception:" << e.getMessage()<< endl;
    }

    return 0;
}
//
// Created by 86138 on 2024/5/18.
//
