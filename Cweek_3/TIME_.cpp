#include <iostream>
#include <ctime>
using namespace std;
int main(){
    time_t now=time(0);
    cout << "number of seconds since January 1,1970:" << now << endl;
    char *dt=ctime(&now);
    cout << "local date and time is:" << dt << endl;
    tm *ltm=localtime(&now);
    cout << "year:" << 1900+ltm->tm_year << endl;
    cout << "month:" << 1+ltm->tm_mon << endl;
    cout << "day:" << ltm->tm_mday << endl;
    cout << "time:" << 1+ltm->tm_hour << ":";
    cout << 1+ltm->tm_min << ":";
    cout << 1+ltm->tm_sec << endl;
    tm *s_t=gmtime(&now);//转换为tm结构,UTC时间
    dt=asctime(s_t);
    cout << "UTC date and time is:" << dt << endl;
}
// Created by 86138 on 2024/3/16.
//
