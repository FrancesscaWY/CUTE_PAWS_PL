//
// Created by 86138 on 2024/5/10.
//

#ifndef CWEEK_11_OBJ_ARR_H
#define CWEEK_11_OBJ_ARR_H
class Point{
public:
    Point();
    Point(int x,int y);
    ~Point();
    void Move(int newX,int newY);
    int getX() const{return X;}
    int getY() const {return Y;}
    static void showCount();
private:
    int X,Y;
};
#endif //CWEEK_11_OBJ_ARR_H
