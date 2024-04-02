#include <iostream>
using namespace std;
int main(){
    char input,alphabet='A';
    cout << "Please enter a alphabet:";
    cin >> input;

    for(int i=0;i<(input-'A'+1);++i){
        for(int j=0;j<=i;j++){
            cout << alphabet << " ";
        }
        ++alphabet;
        cout << endl;
    }
    return 0;
}

//
// Created by 86138 on 2024/4/2.
//
