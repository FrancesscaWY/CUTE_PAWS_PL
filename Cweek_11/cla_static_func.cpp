#include <iostream>
using namespace std;
class Point{
public:
    Point(int x,int y):X(x),Y(y){
        count++;
    }
    Point(Point &p){
        X=p.X;
        Y=p.Y;
        count++;
    }
    int getX(){return X;}
    int getY(){return Y;}
    ~Point(){
        count--;
    }
    static void showCount(){
        cout << "Object count = " << count << endl;
    }
private:
    int X,Y;
    static int count;//静态数据成员,静态数据成员是类的所有对象共享的数据成员
};
int Point :: count = 0;
int main(){
    Point::showCount();
    Point a(4,5);
    cout << "Point A: " << a.getX() << "," << a.getY() << endl;
    Point::showCount();
    Point b(a);
    Point::showCount();
    a.~Point();
    Point::showCount();
    b.~Point();
    Point::showCount();
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
