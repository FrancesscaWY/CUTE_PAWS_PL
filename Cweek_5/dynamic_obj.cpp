#include <iostream>
using namespace std;
class Box{
public:
    Box(){
        cout << "success to Call the constructor" << endl;
    }
    ~Box(){
        cout << "close the constructor" << endl;
    }
};
int main(){
//    Box box;
    Box* My_Box = new Box[3];
    delete[] My_Box;
    return 0;

}
// Created by 86138 on 2024/3/29.
//
