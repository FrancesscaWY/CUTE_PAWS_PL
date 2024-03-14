#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
int main(){
    int n[10];
    for(int i=0;i<10;i++){
        n[i]=i+90;
    }
    cout << "Element" << setw(13) << "Value" << endl;
    for(int j=0;j<10;j++){
        cout << setw(7)  << j <<setw(13) << n[j] << endl;
        //setw(7)用来让数字与Element对齐,setw(13)用来让数字与字段对齐
    }
    return 0;
}    //
// Created by 86138 on 2024/3/14.
//
