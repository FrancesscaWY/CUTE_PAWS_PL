#include <iostream>
using namespace std;
class Line{
public:
    double getLength(void);
    void setLength(double len);
    Line(double len);
    ~Line();
private:
    double length;
};
Line::Line(double len):length(len){
    cout << "Object is being created " << len << endl;//构造函数
}
Line::~Line(void){
    cout << "Object is being deleted " << length << endl;//析构函数
}

void Line::setLength(double len) {
    length=len;
}
double Line::getLength(void){
    return length;
}
int main(){
    Line line(11.6);
    cout << "Length of line:" << line.getLength() << endl;
    line.setLength(4.6);
    cout << "Length of line:" << line.getLength() << endl;
    return 0;
}
// Created by 86138 on 2024/3/18.
//
