#include "obj_arr.h"
#include <iostream>
using namespace std;
int main(){
    cout << "Entering main..." << endl;
    Point G(2,3);
    Point a[2];
    for(int i=0;i<2;i++)
        a[i].Move(i+10,i+20);
    cout << "Exiting the main...";
    return 0;
}
//
// Created by 86138 on 2024/5/10.
//
