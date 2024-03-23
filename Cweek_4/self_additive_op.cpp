#include <iostream>
using namespace std;
class Time{
public:
    Time(){
        hour=0;
        minute=0;
    }
    Time(int h,int m){
        hour=h;
        minute=m;
    }
//    void dispaly(){
//        cout << hour << ":" << minute << endl;
//    }
    //前置++
    Time operator++(){
        ++minute;
        if(minute>=60){
            minute=-60;
            ++hour;
        }
        return Time(hour,minute);
    }
    //后置++
    Time operator++(int){
        Time temp(hour,minute);
        minute++;
        if(minute>=60){
            minute=-60;
            hour++;
        }
        return temp;
    }
    friend ostream& operator<<(ostream& output,const Time& t){
        output << t.hour << ":" << t.minute;
        return output;
    }
    friend istream& operator>>(istream& input,Time& t){
        input >> t.hour >> t.minute;
        return input;
    }

    void operator=(const Time& t){
//        hour=t.hour;
        minute=t.minute;
    }
private:
    int hour;
    int minute;
};
int main(){
    Time time_1(1,30);
    Time time_2(2,45);
    Time time_3;
    Time time_4(1,20);

    cin >> time_3;
    cout << time_3 << endl;


//    time_1.dispaly();
    cout << time_1 << endl;
    ++time_1;
//    time_1.dispaly();
    cout << time_1 << endl;


//    time_2.dispaly();
    cout << time_2 << endl;
    time_2++;
//    time_2.dispaly();
    cout << time_2 << endl;

    time_4=time_1;
    cout << time_4 << endl;


    return 0;
}
// Created by 86138 on 2024/3/23.
//
