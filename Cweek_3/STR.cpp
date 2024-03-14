#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str9[]="THIS IS A TEST FOR THE FUNCTION STR_TOK";
    char *p;
    p=strtok(str9," ");
//    cout << p <<endl;
    while(p!=NULL){
        cout << p <<endl;
        p=strtok(NULL,"");//分割字符串
    } //p为空格再返回p,p不应该一直为空格吗？
//    cout << str9 << endl;

    char str0[14]="hello";
    char str1[]="world";
    char str2[14]="hello";
    char str3[14]="hello world";
    char str4[14];
    char str5[14]="hello";
    string str6="hello";
    string str7="you";
    string str8;
    str8 = str6+str7;
    cout << str8 << endl;
    strcpy(str4,str0);//复制字符串
    cout << str2 << endl;

    strcat(str1,str0);//连接字符串
    cout << str1 << endl;

    int a=strcmp(str0,str1);//比较字符串
    cout << a << endl;
    int b=strcmp(str5,str2);
    cout << b << endl;

    cout << strchr(str0,'l') << endl;//在字符串中查找字符
    cout << strstr(str0,str3) << endl;//在字符串中查找字符串

    cout << str3 << endl;
    cout << str0 << endl;

    int size;
    size=(sizeof(str0)/sizeof(str0[0]));
    cout << "size:" << size << endl;
    cout << "strlen(str0):" << strlen(str0) << endl;
    cout << str1 << endl;



    return 0;
}

// Created by 86138 on 2024/3/14.
//
