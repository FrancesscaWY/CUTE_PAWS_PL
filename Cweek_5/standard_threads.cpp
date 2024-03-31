#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <thread>

using namespace std;

void foo(int z){
    for(int i=0;i<z;i++){
        cout << "Threads use function pointers as callable arguments \n" ;
     }
}

class thread_obj{
public:
    void operator()(int x){
        for(int i=0;i<x;i++){
            cout << "Threads use function objects as callable arguments \n";
        }
    }
};


int main(){
    cout << "Threads 1, 2, 3."
            "Running independently" << endl;
    thread th1(foo,1);

    thread th2(thread_obj(),3);

    auto f=[](int x){
        for(int i=0;i<x;i++){
            cout << "Threads use lambda function as a callable arguments" << endl;
        }
    };

    thread th3(f,4);

    th1.join();

    th2.join();

    th3.join();

    return 0;
}
// Created by 86138 on 2024/3/31.
//
