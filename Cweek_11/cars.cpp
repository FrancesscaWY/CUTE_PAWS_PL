#include <iostream>
using namespace std;
class Vehicle{
public:
    Vehicle():MaxSpeed(0),Weight(0),Height(0),Color("");//构造函数声明，初始化属性为0
    ~Vehicle(){};
    void Run();
    void Stop();

protected:
    int MaxSpeed;
    int Weight;
    int Height;
    string  Color;
};
void Vehicle::Vehicle() {
    cout << "Vehicle is created." << endl;
}
void Vehicle::Run(){
    cout << "Vehicle is deleted." << endl;
}
void Vehicle::Run(){
    cout << "Vehicle is running." << endl;
}
void Vehicle::Stop(){
    cout << "Vehicle has stopped." << endl;
}
class Bicycle:public Vehicle{
public:
    Bicycle():Height(0),Weight(0),Color(""){};
    ~Bicycle(){};
    void Run();
    void Stop();
};
void Bicycle::Run(){
    cout << "Bicycle is running." << endl;
}
void Bicycle::Stop(){
    cout << "Bicycle has stopped." << endl;
}
class Motorcar:public Vehicle{
public:
    Motorcar():Height(0),Weight(0),Color(""){};
    ~Motorcar(){};
    void Run();
    void Stop();
    void SeatNum(int SeatNum);
private:
    int SeatNum;
};
void Motorcar::Run(){
    cout << "Motorcar is running." << endl;
}
void Motorcar::Stop(){
    cout << "Motorcar has stopped." << endl;
}
void Motorcar::SeatNum(int Seat_num){
    SeatNum=Seat_num;
    cout << "The number of seats is " << SeatNum << endl;
}

class Moto_cycle:virtual  public Bicycle,virtual public Motorcar{
public:
    Moto_cycle():Height(0),Weight(0),Color(""){};
    ~Moto_cycle(){};
    void Run();
    void Stop();
};
void Moto_cycle::Run(){
    cout << "Moto_cycle is running." << endl;
}
void Moto_cycle::Stop(){
    cout << "Moto_cycle has stopped." << endl;
}
int main(){
    Vehicle v;
    Bicycle b;
    Motorcar m;
    Moto_cycle mc;
    v.Run();
    v.Stop();
    b.Run();
    b.Stop();
    m.Run();
    m.Stop();
    mc.Run();
    mc.Stop();
    return 0;
}

int main{};
//
// Created by 86138 on 2024/5/12.
//
