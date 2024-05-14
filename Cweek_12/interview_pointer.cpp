#include <iostream>
using namespace std;

class Point {
public:
    Point(int a, int b);

    void getX();

    void getY();

private:
    int x, y;
};

Point::Point(int a, int b) : x(a), y(b) {
    x = a;
    y = b;
}

void Point::getX() {
    cout << "x=" << x << endl;
}
void Point::getY() {
    cout << "y=" << y << endl;
}
int main() {
    Point p(3, 4);
    Point *p1=&p;
    p1->getX();
    p1->getY();//为什么不能用“.”访问成员函数，而要用“->”？，因为p1是指针，而不是对象，只有对象才能用“.”访问成员函数，指针只能用“->”访问成员函数
    return 0;
}
//
// Created by 86138 on 2024/5/14.
//
