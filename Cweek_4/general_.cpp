#include <iostream>
using namespace std;
class Shape{
public:
    void setWidth(int w){
        width=w;
    }
    void setHeight(int h){
        height=h;
    }
protected:
    int width;
    int height;
};
class PaintCOst{
public:
    int getCost(int area){
        return area*90;
    }
};
class PAI:public Shape,public PaintCOst{
public:
    int getArea(){
        return (width*height);
    }
};
int main(){
    PAI shape;
    int area;

    shape.setWidth(5);
    shape.setHeight(20);

    area=shape.getArea();

    cout << area << endl;
    cout << shape.getCost(area) << endl;

}

// Created by 86138 on 2024/3/21.
//
