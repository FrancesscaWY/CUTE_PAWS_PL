#include <iostream>
#include "Point.h"
#include <cmath>
using namespace std;
float lineFit(const Point points[],int nPoint){
    float avgX=0,avgY=0;
    float Lxx=0,Lxy=0,Lyy=0;
    for(int i=0;i<nPoint;i++){
        avgX+=points[i].getX()/nPoint;
        avgY+=points[i].getY()/nPoint;
    }
    for(int i=0;i<nPoint;i++){
        Lxx+=(points[i].getX()-avgX)*(points[i].getX()-avgX);
        Lyy+=(points[i].getY()-avgY)*(points[i].getY()-avgY);
        Lxy+=(points[i].getX()-avgX)*(points[i].getY()-avgY);
    }

    cout << "This line can be fitted by y=ax+b." << endl;
    cout << "a=" <<Lxy/Lxx << " ";
    cout << "b=" << avgY-Lxy*avgX/Lxx << endl;
    return static_cast<float>(Lxy/sqrt(Lxx*Lyy));
}
int main(){
    Point p[10]{Point(6,10),Point(14,20),Point(26,30),
                Point(33,40),Point(54,60),Point(67,70),
                Point(75,80),Point(84,90),Point(100,100)};
    float r=lineFit(p,10);
    cout << "the coefficient r= " << r << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/11.
//
