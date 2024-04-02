#include <iostream>
using namespace std;
int main(){
    int rows,count=0,count1=0,k=0;
    cout << "Enter number of rows:";
    cin >> rows;

    for(int i=1;i<=rows;++i){
        for(int space=1;space<=rows-i;++space){//space
            cout << "  ";
            ++count;
        }

        while(k!=2*i-1){
            if(count<=rows-1){//first half
                cout << i+k << " ";
                ++count;
            }
            else{//second half
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;//increment k
        }
        count1=count=k=0;

        cout << endl;
    }
    return 0;
}
//
// Created by 86138 on 2024/4/2.
//
