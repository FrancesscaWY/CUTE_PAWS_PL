#include <iostream>
using namespace std;
void Sum(int a[][4],int row){
    //为什么不能写成int a[][]?，因为数组的第二维度必须指定，否则编译器无法确定数组的大小
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<4;j++){
            sum+=a[i][j];
        }
        a[i][0]=sum;
        sum=0;
    }
}
void Sum(char C[],int row){//这里是重载函数，函数名相同，参数不同
    int sum=0;
    for(int i=0;i<row;i++){
        sum+=C[i];
    }
    cout << sum;
}
int main(){
    int n;
    cin >> n;
    int b[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> b[i][j];
        }
    }
    Sum(b,n);
    for(int i=0;i<n;i++){
        cout << b[i][0] << endl;
    }
    char C[5]={'A','B','C','D'};
    Sum(C,4);
    return 0;
}
//
// Created by 86138 on 2024/5/10.
//
