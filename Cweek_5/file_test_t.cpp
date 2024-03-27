#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){
    fstream file;
    file.open("file_one.txt",ios::in|ios::out|ios::trunc);//为什么加ios::trunc会打不开
//    file.open("file_one.txt",ios::app|ios::out|ios::in);
    if(!file.is_open()){
        cout << "fail to open " << endl;
        return -1;
    }
//    char text[50];
//    for(int i=0;i<50;i++){
//        cin >> text[i];
//        file << text[i];
//        if(i==49){
//            cout << endl;
//        }
//    }

    string box;
    getline(cin,box);
//    file.write((char *)&box,sizeof(box));
    file << box << endl;
    cout << endl;
//如何从终端读取空格，如何将string输出

    file << "Hello everyone,I'm Francessca." << endl;
    file << "Today is happy." << endl;
//    char word[10000];
//    for(int i=0;i<10000;i++){
//        cin >> word[i];
//        file << word[i] << endl;
//    }
    string line;
    file.seekg(0,ios::beg);
    while(getline(file,line)){
        cout << line << endl;
    }

    file.seekg(0,ios::beg);

    string _line;
    while(getline(file,_line)){
//        file >> _line;
        cout << _line << endl;
    }
    file.close();
    return 0;

}
// Created by 86138 on 2024/3/27.
//
