#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    int result=1;
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=x;j++){
            result *= j;
        }
        x++;
        arr[i]=result;
        cout << arr[i] << " " <<  endl;
        sum += arr[i];
        result=1;
    }
    cout << sum << endl;
    return 0;
}


//
// Created by 86138 on 2024/4/13.
//

//#include "test_high.h"
