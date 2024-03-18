#include <iostream>
using namespace std;
class Line{
public:
    int getLength(void);
    Line(int len);
    Line(const Line &obj);
    ~Line();
private:
    int *ptr;
};
Line::Line(int len){
    cout << "Object is being created" << len << endl;
    ptr=new int;//分配内存
    *ptr=len;
}
Line::Line(const Line &obj) {
    cout << "through copy" << endl;
    ptr=new int;
    *ptr=*obj.ptr;
}
Line::~Line(void){
    cout << "delete" << endl;
    delete ptr;
}
int Line::getLength(void){
    return *ptr;
}
void display(Line obj){
    cout << "Length of line:" << obj.getLength() << endl;
}
int main(){
    Line line(68);
    display(line);
    Line line2=line;
    display(line2);
    return 0;
}
// Created by 86138 on 2024/3/18.
//
