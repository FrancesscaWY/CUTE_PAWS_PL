#include <iostream>
#include "Shape.h"
using namespace std;
int main(){
    Shape *p;
    Rectangle rec;
    triangle  tri;

    rec.setHeight(34);
    rec.setWidth(10);
    cout << rec.getArea() << endl;

    tri.setHeight(20);
    tri.setWidth(22);
    cout << tri.getArea() << endl;

    p=&rec;
    cout << p->getArea() << endl;

    p=&tri;
    cout << p->getArea() << endl;

    int _vsn;
    int const buffer = 256;
    const int buffr =256;

    double *const p;
    const double *i;
    int d-s;
    return 0;
}
// Created by 86138 on 2024/3/26.
//

#include "Shape.h"
