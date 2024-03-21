#include <iostream>
using namespace std;
class Bomb{
public:
    Bomb(){
        cout << "Bomb is created" << endl;
    }
    ~Bomb(){
        cout << "Bomb is deleted" << endl;
    }
    int getPower(){
        return power;
    }
    void setPower(int p){
        power=p;
    }
    int  printPower(){
        cout << "Bomb power is:" << power << endl;
    }
    Bomb operator+(const Bomb& b){
        Bomb bomb;
        bomb.power=this->power+b.power;
        return bomb;
    }
    Bomb operator -(){
        Bomb bomb;
        power=-power;
        return bomb;
    }
private:
    int power;
};
int main(){
    Bomb bomb1;
    Bomb bomb2;
    Bomb bomb3;
    bomb1.setPower(10);
    bomb1.getPower();
    bomb2.setPower(20);
    bomb2.getPower();
    -bomb2;
    bomb2.printPower();
bomb3=bomb1.operator+(bomb2);
//    bomb3=bomb1+bomb2;
    bomb3.printPower();

    return 0;
}

// Created by 86138 on 2024/3/21.
//
