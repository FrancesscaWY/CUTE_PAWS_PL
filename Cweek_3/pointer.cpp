#include <iostream>
using namespace std;
const int MAX=5;
int main(){
    int array[MAX]={1,2,3,4,5};
//    char array1[MAX]={'a','b','c','d','e'};
    int *ptr;
    int *ptrr[MAX];//array of pointers
    const char *array2[MAX]={"a","b","c","d","e"};//array of pointers
    int *p1;
    int **p2;//pointer to pointer
    int x=9000;
    p1=&x;
    p2=&p1;
    cout << p1 << " " << *p1 << endl;
    cout << p2 << " " << *p2 << " " << **p2 << endl;
    for(int j=0;j<MAX;j++){
        cout << array2[j] << endl;
    }
    for(int i=0;i<MAX;i++){
        ptrr[i]=&array[i];
        cout << *ptrr[i] << endl;
        cout << ptrr[i] << endl;
    }
    ptr = array;
//    int i=0;
    while(ptr <=&array[MAX-1]){
        cout << ptr << endl;
        cout << *ptr << endl;
        ptr++;
    }
//    cout << ptr << endl;
//    cout << *ptr << endl;
//    cout << array << endl;
    for(int j=0;j<MAX;j++){
        cout << ptr << endl;
        cout << *ptr << endl;
        ptr++;
    }
    cout << "=============================\n";
    for(int j=MAX;j>0;j--){
        ptr--;
        cout << ptr <<endl;
        cout << *ptr << endl;
    }
    cout << "=============================\n";
    for(int i : array){//range-based for loop
        cout << i << " ";
        cout << array[i] << " ";
        cout << ptr << " ";
        cout << *ptr <<endl;

    }
    ptr=array;
    int var =10;
    int *p;
    p=&var;
    int *ip= nullptr;
    cout << ip << endl;
    cout << p << endl;
    cout <<  *p << endl;
    cout << var <<endl;
    cout << &var << endl;
    return 0;
}
// Created by 86138 on 2024/3/15.
//
