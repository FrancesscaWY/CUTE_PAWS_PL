#include <iostream>
using namespace std;
int comm(int n,int k){
    if(k==0||k==n){
        return 1;
    }else if(k>n){
        return 0;
    }else{
        return comm(n-1,k-1)+comm(n-1,k);
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    cout << comm(n,k) << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
