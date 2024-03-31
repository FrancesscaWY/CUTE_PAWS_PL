#include <iostream>
#include <pthread.h>
#include <cstdlib>

using namespace std;

#define NUM_THREADS 5

void *PrintStory(void *thread_id){
    int tid=*((int*)thread_id);
    cout << "Love Story! Thread ID : " << tid << endl;
    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_THREADS];
    int Index_s[NUM_THREADS];
    int rc;
    int i;
    for(i=0;i<NUM_THREADS;++i){
        cout << "Create " << i << " thread." << endl;
        Index_s[i]=i;
        rc=pthread_create(&threads[i],NULL,PrintStory,(void*)&Index_s[i]);

        if(rc){
            cout << "Error: unable to create thread," << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}

// Created by 86138 on 2024/3/31.
//
