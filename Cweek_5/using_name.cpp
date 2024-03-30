#include <iostream>
using namespace std;
namespace first_space{
    void func(){
        cout << "Inside first space." << endl;
    }
     namespace second_space{
        void func(){
            cout << " The second space in first space." << endl;
        }
    }
}
using namespace first_space::second_space;
int main(){
    func();
    return 0;
}

// Created by 86138 on 2024/3/30.
//
