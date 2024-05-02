#include <iostream>
#include <cmath>
using namespace std;
class Point{
public:
    Point(int xx=0,int yy=0){
        x=xx;
        y=yy;
    }
    Point(Point &p);//复制函数
    double getX(){return x;}
    double getY(){return y;}
private:
    double x,y;
};
Point::Point(Point &p){
    x=p.x;
    y=p.y;
    cout << "Point Copy is over!" << endl;
}
class Line{
public:
    Line(Point xp1,Point  xp2);//构造函数,初始化以对象为参数的构造函数
    Line(Line &l);//复制函数
    double getLen();
private:
    Point p1,p2;//p1,p2是Point类的对象
    double len;
};
Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2){
    cout << "Line is created!" << endl;
    double x=static_cast<double>(p1.getX()-p2.getX());
    double y=static_cast<double>(p1.getY()-p2.getY());
    len=sqrt(x*x+y*y);
}
Line::Line(Line &l):p1(l.p1),p2(l.p2){//复制函数
    cout << "Line Copy is over!" << endl;
    len=l.len;//复制长度
}

double Line::getLen(){
    return len;
}
int main(){
    Point myp1(1,1),myp2(4,5);//myp1,myp2是Point类的对象
    cout << "one " << endl;
    Line line(myp1,myp2);//调用构造函数,形参结合时调用复制函数，初始化内嵌对象时调用复制函数，两个对象都调用复制函数，一共调用了四次复制函数
    cout << "two " << endl;
    Line line2(line);//调用复制函数
    cout << "three " << endl;
    cout << "The length is: " << endl;
    cout << line.getLen() << endl;
    cout << "The length is: " << endl;
    cout << line2.getLen() << endl;
    return 0;
}

//
// Created by 86138 on 2024/5/2.
//
