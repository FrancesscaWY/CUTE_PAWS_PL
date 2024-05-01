#include <iostream>
using namespace std;
const double PI=3.14159265358979323846;
const double FENCE_PRICE=35;
const double CONCRETE_PRICE=20;
class Circle{
public:
    Circle(double r);
    double calcPerimeter();
    double calcArea();
private:
    double radius;
};
Circle::Circle(double r){
    radius=r;
}
//
// Created by 86138 on 2024/5/1.
//
