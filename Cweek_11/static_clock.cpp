#include <iostream>

using namespace std;

class Clock {
public:
    Clock();

    void setTime(int newH, int newM, int newS);

    void showTime();

private:
    int hour, min, sec;
};

Clock::Clock()
        : hour(0), min(0), sec(0) {}
void Clock::setTime(int newH,int newM,int newS){
    hour=newH;
    min=newM;
    sec=newS;
}
void Clock::showTime(){
    cout << hour << ":" << min << ":" << sec << endl;
}
Clock  globClock;//声明一个全局对象，具有静态生命周期，命名空间为全局命名空间
int main() {
    cout <<"First time set and output:" << endl;
    globClock.showTime();
    globClock.setTime(8,30,30);
    Clock myClock(globClock);//声明一个局部对象，具有动态生命周期，命名空间为main函数的局部命名空间，复制构造函数
    cout << "myClock:";
    myClock.showTime();
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
