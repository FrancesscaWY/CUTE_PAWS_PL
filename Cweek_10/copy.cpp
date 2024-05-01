#include <iostream>
using namespace std;
class Point{
public:
    Point(int xx=0,int yy=0){
        x=xx;
        y=yy;
    }
    Point(Point &p);//复制函数
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
private:
    int x;
    int y;
};
Point::Point(Point &p){
    x=p.x;
    y=p.y;
    cout << "Copy is over!" << endl;
}
void func(Point p){//以对象作为参数，调用复制函数
    cout << p.getX() << endl;
}
Point func1(){//返回对象，调用复制函数
    Point a(1,2);
    return a;
};
int main(){
    Point a(4,5);
    Point b=a;//调用复制函数
    cout << b.getX() << endl;
    func(b);//调用复制函数
    b=func1();//调用复制函数
    cout << b.getX() << endl;
    //为什么只输出了两次复制函数？，
    // 因为第一次是b=a，第二次是func(b)，第三次是b=func1()
    return 0;
}
//
// Created by 86138 on 2024/5/1.
//
