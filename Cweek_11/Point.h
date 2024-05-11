//
// Created by 86138 on 2024/5/11.
//

#ifndef CWEEK_11_POINT_H
#define CWEEK_11_POINT_H
class Point{
public:
    Point(float x=0,float y=0):X(x),Y(y){}
    float getX() const{return X;}
    float getY() const{return Y;}
private:
    float X,Y;
};
#endif  //CWEEK_11_POINT_H