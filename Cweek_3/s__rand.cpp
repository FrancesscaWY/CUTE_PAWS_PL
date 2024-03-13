#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int i,j;
    srand((unsigned)time(NULL));//初始化随机数种子
    for(i=0;i<11;i++){
        j=rand();//产生随机数
        cout << "RANDOM NUMBER:" << j << endl;
    }
    return 0;
}
// Created by 86138 on 2024/3/13.
//
