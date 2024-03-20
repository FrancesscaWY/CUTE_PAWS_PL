#include <iostream>
using namespace std;
class Box{
public:
    int data;
    int count;
    Box(double l=2.0,double b=2.0,double h=2.0){
        cout << "Constructor called" << endl;
        length=l;
        breadth=b;
        height=h;
    }
    double volume(){
        return length*breadth*height;
    }
private:
    double length;
    double breadth;
    double height;
};

    double PrintVolume(Box *ptr3){
        cout << ptr3->volume() << endl;
    }
int main(){
    Box box1;
    Box box2(3.3,1.2,1.5);
    Box box3(3.3,1.2,10.5);
//    PrintVolume(&box3);
//    box1.length=10.0;//error: 'double Box::length' is private within this context
    box1.count=1;
    box2.count=2;
    Box *ptr=&box1;//指向对象的指针

    Box *ptr2=new Box(3.4,1.2,1.5);//指向对象的指针 开辟动态内存
    ptr2->count=3;
    ptr2->volume();
    cout << "box1 volume: " << ptr2->volume() << endl;
    cout << "box1 count: " << ptr2->count << endl;


    cout << "box1 volume: " << ptr->volume() << endl;
    cout << "box1 count: " << ptr->count << endl;
    ptr=&box2;
    cout << "box2 volume: " << ptr->volume() << endl;
    cout << "box2 count: " << ptr->count << endl;

    cout << "box3 volume: " << PrintVolume(&box3) << endl;
    delete ptr2;
    return 0;
}
// Created by 86138 on 2024/3/20.
//
