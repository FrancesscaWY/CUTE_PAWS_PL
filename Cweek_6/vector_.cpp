#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s="hello wa";
//    int x=s.length();



    vector<int> v;
    int i;
    cout << "vector size = " << v.size() << endl;
    for(i=0;i<10;i++){
        v.push_back(i);
    }

    cout << "extended vector size = " << v.size() << endl;

    vector<int>::iterator vc=v.begin();//vc is a pointer
    while(vc!=v.end()){
        cout << "Value of vc = " << *vc << endl;
        vc++;
    }

    return 0;

}

// Created by 86138 on 2024/4/1.
//
