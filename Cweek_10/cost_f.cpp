#include <iostream>
using namespace std;
const double PI=3.14159265358979323846;
const double FENCE_PRICE=35;
const double CONCRETE_PRICE=20;
class Circle{
public:
    Circle(double r);
    ~Circle(){};
    double calcPerimeter();
    double calcArea();
private:
    double radius;
};
Circle::Circle(double r){
    radius=r;
}
double Circle::calcPerimeter(){
    return 2*PI*radius;
}
double Circle::calcArea(){
    return PI*radius*radius;
}
int main(){
    double radius;
    cin >> radius;
    Circle circle(radius);
    Circle circle_R(radius+3);
    double fenceCost=circle_R.calcPerimeter()*FENCE_PRICE;
    double concreteCost=(circle_R.calcArea()-circle.calcArea())*CONCRETE_PRICE;
    double COst=fenceCost+concreteCost;
    cout << "The fence cost is " << fenceCost << endl;
    cout << "The concrete cost is " << concreteCost << endl;
    cout << "The total cost is " << COst << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/1.
//
