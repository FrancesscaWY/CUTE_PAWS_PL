#include <iostream>
#include <assert.h>
using namespace std;
class Point{
public:
    Point():x(0),y(0){
        cout << "Default constructor called." << endl;
    }
    Point(int X,int Y):x(X),y(Y){
        cout << "Constructor called." << endl;
    }
    ~Point(){
        cout << "Destructor called." << endl;
    }
    int getX() const{return x;}
    int getY() const{return y;}
    void move(int newX,int newY){
        x=newX;
        y=newY;
    }

private:
    int x,y;
};
//定义一个动态数组类，成员变量是Point类的对象数组，成员函数element返回数组中指定下标的元素
//该类的每一个对象都是一个Point类的对象数组
class ArrayOfPoints{
public:
    ArrayOfPoints(int size):size(size){
        points=new Point[size];//动态分配size个Point类的对象，为什么说是动态分配？，因为size是变量，而不是常量
        //为什么不能使用变量定义数组大小？，因为数组的大小必须是常量，而不能是变量，如果这个变量在程序运行时才能确定，那么就不能用变量定义数组大小
    }
    ~ArrayOfPoints(){
        cout << "Deleting..." << endl;
        delete[] points;
    }
    Point &element(int index){//“&”是什么，为什么要用“&”？，因为返回的是Point类的对象，而不是对象的拷贝，所以要用“&”
        assert(index>=0 && index<size);//断言，如果index<0或者index>=size，则程序终止
        return points[index];
    }
private:
    Point *points;
    int size;
};
int main(){
    cout << "Step one:" << endl;
    Point *ptr1=new Point;
    delete ptr1;
    cout << "Step two:" << endl;
    Point *ptr2=new Point(2,5);
    delete ptr2;
    cout << "Step three:" << endl;
    ArrayOfPoints points(2);
    points.element(0).move(2,3);
    points.element(1).move(3,4);
    return 0;
}
//
// Created by 86138 on 2024/5/15.
//
