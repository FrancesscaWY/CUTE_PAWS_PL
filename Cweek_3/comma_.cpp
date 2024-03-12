#include <iostream>
using namespace std;
int main(){
    int i=10;
    int j=12;
    i=(j++,j+100,j+90);
    cout <<i << endl;
    return 0;
}

// Created by 86138 on 2024/3/12.
//
