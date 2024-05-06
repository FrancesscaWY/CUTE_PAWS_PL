#include <iostream>
using namespace std;
int main() {
    int M,N;
    cin >> M >> N;
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=M;i<=N;i++){
        int j=i;
        do{
            count[j%10]++;
            j=j/10;
        }while(j);
    }
    for(int i : count){
        cout << i << " ";
    }
    return 0;
}
//
// Created by 86138 on 2024/5/6.
//
