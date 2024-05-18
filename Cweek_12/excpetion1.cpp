#include <iostream>
using namespace std;
int divide(int x,int y){
    if(y==0){
        throw x;
    }
    return x/y;
}
int main(){
    try {
        cout << divide(8, 0) << endl;
        cout << divide(2, 3) << endl;
    }catch(int){
        cout << "x is divided by 0!" << endl;
    }
    return 0;
}
//
// Created by 86138 on 2024/5/18.
//
