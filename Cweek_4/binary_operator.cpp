#include <iostream>
using namespace std;
class Box{
public:

    double length;
    double  breadth;
    double height;

    void set_length(double l){
        length=l;
    }
    void set_breadth(double b){
        breadth=b;
    }
    void set_height(double h){
        height=h;
    }
    double getVolume(){
        return  length*breadth*height;
    }
    Box operator+(const Box& b){
        Box box;
        box.length=this->length+b.length;
        box.breadth=this->breadth+b.breadth;
        box.height=this->height+b.height;
        return box;
    }

};
int main(){
    Box box1;
    Box box2;
    Box box3;
    box1.set_length(3.3);
    box1.set_breadth(1.2);
    box1.set_height(1.5);

    box2.set_length(8.5);
    box2.set_breadth(6.0);
    box2.set_height(2.0);
    double a= box1.getVolume();
    double  b=box2.getVolume();
    cout << a << endl;
    cout << b << endl;

    box3=box1+box2;
    double  c=box3.getVolume();
    cout << c << endl;
return 0;
}
// Created by 86138 on 2024/3/23.
//
