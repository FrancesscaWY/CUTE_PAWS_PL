#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int Max;
    Max=(a>b)?a:b;

    do{
        if(Max%a==0&&Max%b==0){
            cout << "The common multiple of " << a << " and " << b << " is " << Max << endl;
            break;
        }
        else{
            Max++;
        }
    }while(true);
    return 0;
}
//
// Created by 86138 on 2024/4/3.
//
