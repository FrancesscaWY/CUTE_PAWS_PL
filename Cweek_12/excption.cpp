#include <iostream>
using namespace std;
int divide(int x,int y){
    if(y==0)
        throw("x is divided by zero");
    return x/y;
}
int main(){
    int a,b;
    cout << "Input two numbers:" << endl;
    cin >> a >> b;
    try{
        cout << "Result is " << divide(a,b) << endl;
    }
    catch(const char* s){
        cout << "Exception: " << s << endl;
    }
    cout << "End of program." << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/16.
//
