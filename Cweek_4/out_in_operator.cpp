#include <iostream>
using namespace std;
class Box{
public:
    Box(){
        length=0;
        breadth=0;
        height=0;
    }
    void set_box(double l,double b,double h){
        length=l;
        breadth=b;
        height=h;
    }
    friend ostream& operator<<(ostream& output,const Box& b){
        output << "Length:" << b.length << " Breadth:" << b.breadth << " Height:" << b.height;
        return output;
    }
    friend istream& operator>>(istream& input,Box& b){
        input >>b.length >> b.breadth >> b.height;
        return input;
    }
private:
    double length;
    double breadth;
    double height;
};

int main(){
    Box b1;
    cin >> b1;
    cout << b1 << endl;
}
// Created by 86138 on 2024/3/23.
//
