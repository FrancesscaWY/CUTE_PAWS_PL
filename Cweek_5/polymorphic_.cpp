#include <iostream>
using namespace std;
class Shape{
public:
    Shape(int a=0,int b=0){
       height=a;
       width=b;
    }
    virtual int area(){
        cout << "parent class: " << endl;
        return 0;
    }
protected:
    int height;
    int width;
};

class rectangle: public Shape{
public:
    rectangle(int a=0,int b=0):Shape(a,b){ }
    int area(){
        cout << "rectangle area:" << endl;
        return (width*height);
    }
};

class triangle:public Shape{
public:
    triangle(int a=0,int b=0):Shape(a,b){ }
    int area(){
        cout << "triangle area:" << endl;
        return ((width*height)/2);
    }
};

int main(){
    Shape *shape;
    rectangle rec(4,5);
    triangle tri(3,4);

    shape = & rec;
    cout << shape->area() << endl;

    shape = &tri;
    cout << shape->area() << endl;
//    int a=shape.area();
//    int b=shape.area();

//    cout << a << endl;
//    cout << b << endl;

    return 0;
}

// Created by 86138 on 2024/3/25.
//
