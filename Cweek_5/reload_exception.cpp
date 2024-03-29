#include <iostream>
using namespace std;
struct MyException: public exception{
const char * what() const throw(){
    return "C++ MY exception.";
}
};
int main(){
    try{
        throw MyException();
    }
    catch(MyException & c) {
        cout << "MyException is caught." << endl;
        cout << c.what() << endl;
    }
    return 0;
}
// Created by 86138 on 2024/3/29.
//
