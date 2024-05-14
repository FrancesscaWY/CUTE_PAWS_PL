#include <iostream>
using namespace std;
void splitNum(float x,int *IntPart,float *FracPart){
    *IntPart = static_cast<int>(x);
    *FracPart = x - *IntPart;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << *(*(arr +i) +j) << " ";
        }
        cout << endl;
    }
    float x = 3.14159,f;
    int n;
    splitNum(x,&n,&f);
    cout << "Integer part is " << n << ",Fraction part is " << f << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/14.
//
