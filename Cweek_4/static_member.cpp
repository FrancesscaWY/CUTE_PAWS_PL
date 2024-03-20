#include <iostream>
using namespace std;
class BOX{
public:
    static int objectCount;
    BOX(double l,double b,double h){
        cout << "Constructor called" << endl;
        length=l;
        breadth=b;
        height=h;
        objectCount++;
    }
    double volume(){
        return length*breadth*height;
    }
    static int GetCount(){
        return objectCount;
    }
private:
    double length;
    double breadth;
    double height;
};
int main(){
    cout << "Initial stage count:" << BOX::GetCount() << endl;
    BOX box1(3.3,1.2,1.5);
    BOX box2(8.5, 6.0, 2.0);
//    cout << "The index of box2:" << BOX::objectCount << endl;
    BOX box3(3.3,1.2,1.5);
    cout << "Final stage count:" << BOX::GetCount() << endl;
    return 0;
}
// Created by 86138 on 2024/3/20.
//


