#include <iostream>
#include <cmath>
using namespace std;
class Point{
public:
    Point(int x,int y):X(x),Y(y){}
    int getX(){return X;}
    int getY(){return Y;}
    friend float distance(Point &a,Point &b);//声明友元函数,友元函数是类的友元,但不是成员函数
private:
    int X,Y;
};
float distance(Point &a,Point &b){
    double x=a.X-b.X;
    double y=a.Y-b.Y;
    return static_cast<float>(sqrt(x*x+y*y));
}
int main(){
    Point a(1,1),b(4,5);
    cout << "The distance is: " << distance(a,b) << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
