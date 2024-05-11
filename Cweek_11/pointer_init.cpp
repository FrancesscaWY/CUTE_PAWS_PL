#include <iostream>
using namespace std;
int main(){
    int *p;
    void *v1;
    string words="I am a string";
    v1 =&words;
    string *v2=static_cast<string *>(v1);//void *v1转换为string *v2
    int x=100;
    p=&x;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++){
        cout << *(a+i) << " ";
    }
    cout << endl;
    for(int *p1=a;p1<(a+10);p1++){
        cout << *p1 << " ";
    }
    cout << endl;

    cout << "x=" << x << endl;
    cout << "*p=" << *p <<endl;
    cout << "void *v1 to string:" << *v2 << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/11.
//
