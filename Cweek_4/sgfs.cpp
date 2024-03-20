#include <iostream>
using namespace std;
class BOX{
public:
    BOX(double l=2.0,double b=2.0,double h=2.0){
        cout << "Calling the constructor" << endl;
        length=l;
        breadth=b;
        height=h;
    }
    double volume(){
        return length*breadth*height;
    }
    int compare(BOX box){
        return this->volume() > box.volume();
    }
private:
    int length;
    int breadth;
    int height;
};
int main(){
  BOX box1(3.3,1.2,1.5);
  BOX box2(8.5, 6.0, 2.0);
  if(box1.compare(box2))
      cout << "Box2 is smaller than Box1" << endl;

  else
      cout << "Box2 is bigger than Box1" << endl;
    return 0;
}
// Created by 86138 on 2024/3/19.
//
