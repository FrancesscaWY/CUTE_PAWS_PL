#include <iostream>
using namespace std;
const int size=10;

class safe_array{
public:
    safe_array(){
        register int i;//寄存器变量
        for(i=0;i<size;i++){
            array[i]=i;
        }
    }
    int &operator[](int i){
        if(i>size){
            cout << "Index out of bounds" << endl;
            return array[0];
        }
        return array[i];
    }
private:
    int array[size];
};
int main(){
    safe_array sa1;
    cout << "sa1[2] is:" << sa1[2] << endl;
    cout << "sa1[12] is:" << sa1[12] << endl;
    return 0;
}
// Created by 86138 on 2024/3/23.
//
