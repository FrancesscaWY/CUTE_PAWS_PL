#include <iostream>
using namespace std;
int main(){
    int a[3][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}};
    int b[4][5]={1,2,3,4,5,
                6,7,8,9,10,
                11,12,13,14,15,
                16,17,18,19,20};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << a[i][j] << " " ;
        }
    }
    cout << endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout << b[i][j] << "\t" ;
            if(j==4){
                cout << endl;
            }
        }
    }
    cout << b << endl;
    return 0;
}
// Created by 86138 on 2024/3/14.
//
