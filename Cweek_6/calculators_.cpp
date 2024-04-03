#include <iostream>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cin >> num1 >> op >> num2;
    switch(op){
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            if(num2==0){
                cout << "Divided by zero!";
                break;
            } else
            cout << num1/num2;
            break;
        default:
            cout << "Invalid operator!";
            break;
    }
    return 0;
}
//
// Created by 86138 on 2024/4/3.
//
