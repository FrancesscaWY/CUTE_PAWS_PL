#include <iostream>
using namespace std;
class BOX{
protected:
    double length;
};
class Small_Box:BOX{
public:
    void set(double len);
    double get();
};

void Small_Box::set(double len){
    length=len;
}
double Small_Box::get(){
    return length;
}
int main(){
    Small_Box box1;
    double a;
    cin >> a;
    box1.set(a);
    double b=box1.get();
    cout << b << endl;
    return 0;
}
// Created by 86138 on 2024/3/18.
//
