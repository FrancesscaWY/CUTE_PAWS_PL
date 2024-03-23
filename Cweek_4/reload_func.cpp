#include <iostream>
using namespace std;
class Print_class{
public:
    void print(int i){
        cout << "print int: " << i << endl;
    }
    void print(double f){
        cout << "print float: " << f << endl;
    }
    void print(char* c){
        cout << "print char: " << c << endl;
    }
};
int main(){
    Print_class p;
    int x;
    cin >> x;
    p.print(x);
    p.print(5);
    p.print(500.290);
    p.print("Hello C++");
    return 0;

}

// Created by 86138 on 2024/3/23.
//
