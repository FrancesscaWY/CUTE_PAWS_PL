#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file("example.txt",ios::out);
    file << "hello,everyone";
    file.close();
    file.open("example.txt",ios::in|ios::out);
    file.seekp(5,ios::beg);
    file << "world";
    //如果不关闭文件直接输出，输出字段会从指针指向的位置开始输出
    file.seekp(-3,ios::cur);
    file << "one";
    file.seekp(-4,ios::end);
    file << "!";
    file.close();
    file.open("example.txt",ios::in);
    string str2;
    file >> str2;
    cout << str2 << endl;
    file.close();
}

//
// Created by 86138 on 2024/6/8.
//
