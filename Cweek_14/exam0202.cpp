#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    double x,y;
    Point(double x=0.0, double y=0.0): x(x),y(y){}
    double distanceTo(Point p)const{
        //**********found**********    【5分】
        return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
    }
};

const int MAX_SIDES=100;

class Polygon{
    Point vertex[MAX_SIDES-1];
    int num_of_side;
public:
    Polygon():num_of_side(0){}
    void addVertex(Point p){
        //**********found**********    【5分】
        if(num_of_side<MAX_SIDES){
            vertex[num_of_side]=p;
            num_of_side++; }
    }
    void addVertex(Point p,int pos){
        if(num_of_side>=MAX_SIDES) return;
        if(pos>=num_of_side || pos<0) return;
        //**********found**********    【5分】
        for(int i=num_of_side-1;i>=pos;i--)
            vertex[i+1]=vertex[i];//后移
        vertex[pos]=p;
        num_of_side++;
    }
    double circumference(){
        if(num_of_side<3) return 0.0;
        double cir=vertex[0].distanceTo(vertex[num_of_side-1]);//首尾相连
        //**********found**********    【5分】
        for(int i=0; i<num_of_side-1; i++)
            cir+=vertex[i].distanceTo(vertex[i+1]);//累加
        return cir;
    }
};

int main(){
    Polygon poly;
    poly.addVertex(Point(0.0,0.0));
    poly.addVertex(Point(1.0,1.0));
    poly.addVertex(Point(1.0,0.0));
    poly.addVertex(Point(0.0,1.0),1);
    cout<<"多边形周长："<<poly.circumference()<<endl;

    return 0;
}


//
// Created by 86138 on 2024/5/30.
//
