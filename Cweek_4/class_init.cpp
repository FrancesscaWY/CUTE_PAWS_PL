#include <iostream>
using namespace std;
class BOX{
public:
    double length;
    double breadth;
    double height;
    double getVolume(void);
    void set(double len,double cre,double hei);
};
double BOX::getVolume(void){
    return length*breadth*height;
}
void BOX::set(double len,double cre,double hei){
    length=len;
    breadth=cre;
    height=hei;
}
int main(){
    BOX Box1;
    double volume;
    double a,b,c;
    cin >> a >> b >> c;
    Box1.set(a,b,c);
    volume=Box1.getVolume();
    cout << volume << endl;
    return 0;
}
// Created by 86138 on 2024/3/18.
//
