#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 4

struct thread_Data{
    int thread_id;
    char *message;
};

void *PrintLove (void *threadArg){
    struct thread_Data *my_data;
    my_data= (struct thread_Data *) threadArg;

    cout << "Thread ID : " << my_data->thread_id;
    cout << " Message : " << my_data->message << endl;

    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_THREADS];
    struct thread_Data td[NUM_THREADS];
    int rc;
    int i;
    for(int i=0;i<NUM_THREADS;i++){
        cout << "Creating thread: " << i << endl;
        td[i].thread_id=i;
        td[i].message="I Love Me!";
        rc=pthread_create(&threads[i],NULL,PrintLove,(void *)&td[i]);

        if(rc){
            cout << "Error: unable to create thread :  "  << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
// Created by 86138 on 2024/3/31.
//

//#include "struct_threas.h"h
