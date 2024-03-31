#include <iostream>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 6

void *PrintLove(void *args){
    cout << "I Love Me." << endl;
    return 0;
}

int main(){
    pthread_t tid_s[NUM_THREADS];
    for(int i=0;i<NUM_THREADS;++i){
        int ret=pthread_create(&tid_s[i],NULL,PrintLove,NULL);
        if(ret){
            cout << "pthread_create error : error_code=" << ret << endl;
        }
    }
    pthread_exit(NULL);
}
// Created by 86138 on 2024/3/31.
//
