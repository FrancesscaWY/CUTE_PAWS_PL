#include <iostream>
using namespace std;
double division(int a,int b){
    if(b==0){
        throw "Division by zero condition";
    }
    return (a/b);
}
int main(){
    int x=90;
    int y=0;
    double z=0;
    try{
        z= division(x,y);
        cout << z << endl;
    }catch (const char* msg){ //这行怎么解释？将上面的throw存为一个指针嘛？
        cerr << msg << endl;
    }

    return 0;

}
// Created by 86138 on 2024/3/28.
//
