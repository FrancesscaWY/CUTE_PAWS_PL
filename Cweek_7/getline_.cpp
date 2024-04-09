/*-------------Basic Input/Output-------------*/
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int age;
    //standard input(cin)
    cout<<"Please enter an integer value as your age: ";
    cin>>age;
    cout<<"Your ager is: "<<age<<".\n";
    //cin and string
    string mystr;
    cout<<"What's your name? "<<endl;
    mystr="\n";
    getline(cin,mystr);

    getline(cin,mystr);
    cout<<"Hello,"<<mystr<<".\n";
    char sex;
    cout<<"Please enter a F or M as your sex: ";
    cin>>sex;
    cout<<"Your sex is: "<<sex<<endl;
    cout<<"What's your favorite team? ";
    mystr="\n";
    getline(cin,mystr);
       //若把上面两排注释掉，前面的回车会被当作输入
    getline(cin,mystr);
    cout<<"I like "<<mystr<<".\n";

    system("pause");
    return 0;
}
//
// Created by 86138 on 2024/4/9.
//
