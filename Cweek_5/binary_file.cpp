#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file_;
    file_.open("binary.bin",ios::in|ios::out|ios::trunc|ios::binary);
    if(!file_.is_open()){
        cout << "Fail to open" << endl;
        return -1;
    }
    int a=123;
    double b=3.14159;
    file_.write((char*)&a,sizeof(a));
    file_.write((char*)&b,sizeof(b));

    file_.seekg(0,ios::beg);

    int c;
    double d;

    file_.read((char*)&c,sizeof(c));
    file_.read((char*)&d,sizeof(d));

    cout << c << endl;
    cout << d <<  endl;

    file_.close();
    return 0;
}
//
// Created by 86138 on 2024/3/27.
//
