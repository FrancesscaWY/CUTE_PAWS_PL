#include <iostream>
#include "obj_arr.h"
using namespace std;
Point::Point() {
    X=Y=0;
    cout << "Default Constructor called." << endl;
}
Point::Point(int x,int y){
    X=x;
    Y=y;
    cout << "Constructor called." << endl;
}
Point::~Point(){
    cout << "Constructor deleted." << endl;
}
void Point::Move(int newX, int newY) {
    cout << "Moving the Point to (" << newX << "," << newY << ")." << endl;
    X=newX;
    Y=newY;
}
//
// Created by 86138 on 2024/5/10.
//
