#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int right_num;
    do{
        right_num=n%10;
        cout << right_num;
        n/=10;
    }while(n!=0);
    cout << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/23.
//
