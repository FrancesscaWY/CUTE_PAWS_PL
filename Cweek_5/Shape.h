//
// Created by 86138 on 2024/3/26.
//

#ifndef CWEEK_5_SHAPE_H
#define CWEEK_5_SHAPE_H


class Shape {
public:
    virtual int getArea()=0;
    void setWidth(int w){
        width=w;
    }
    void setHeight(int h){
        height=h;
    }
protected:
    int width;
    int height;
};

class Rectangle : public Shape{
public:
    int getArea(){
        return width*height;
    }
};
class triangle : public Shape{
public:
    int getArea(){
        return width*height/2;
    }
};



#endif //CWEEK_5_SHAPE_H
