#include <iostream>
using namespace std;
int main(){
    int rows,c=1;
    cout << "Enter number of rows:";
    cin >> rows;

    for(int i=0;i<rows;i++){
        for(int space=1;space<=rows-i;space++){
            cout << "  ";
        }
        for(int j=0;j<=i;++j){
            if(j==0||i==0){
                c=1;
            } else{
                c=c*(i-j+1)/j;
            }
            cout << c << "  ";
        }
        cout << endl;
    }
    return 0;
 }
//
// Created by 86138 on 2024/4/2.
//
