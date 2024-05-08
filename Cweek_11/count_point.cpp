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
    ~Point(){
        count--;
    }
    int getX(){return X;}
    int getY(){return Y;}
    void showCount(){
        cout << "Object count = " << count << endl;
    }
private:
    int X,Y;
    static int count;//静态数据成员,静态数据成员是类的所有对象共享的数据成员
};
int Point::count=0;
int main(){
    Point a(4,5);
    cout << "Point A: " << a.getX() << "," << a.getY() << endl;
    a.showCount();
    Point b(a);
    cout << "Point B: " << b.getX() << "," << b.getY() << endl;
    b.showCount();
    a.~Point();
    cout << "After delete a:" << endl;
    b.showCount();
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
