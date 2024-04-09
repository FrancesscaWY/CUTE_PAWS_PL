#include <iostream>
#include <iomanip>
using namespace std;

void fun(int *x, int *y) {
    cout << *x << *y;
    *x = 3;
    *y = 4;
}

int main() {
    int x,y;
    char z;
    int arr[] = {1, 2, 3, 4, 5}, *ptr = arr;
    cin >> x >> ws >> y;// ws表示忽略空白字符
//    cin >> z >> ends;
    cout << x  << y <<  endl;
    *(ptr + 2) += 2;
    cout << *ptr << " " << *(ptr + 2) << endl;
    double pi = 31.14159;
    cout << setw(5) << setprecision(2) << pi << endl;
    cout << setprecision(3) << pi << setw(6) << "0" <<endl;
    cout << setfill('x') << setw(10) << setprecision(4) << pi << endl;
    return 0;
}

//
// Created by 86138 on 2024/4/9.
//
