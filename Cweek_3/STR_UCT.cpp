#include <iostream>
#include <cstring>
using namespace std;
struct PERSON {
    char name[20];
    char gender[6];
    int age[150];
    int id[30];
};
int main(){
    PERSON person1;
    PERSON person2;
    strcpy(person1.name,"Tom");
    strcpy(person1.gender,"female");
    strcpy(person2.name,"Jerry");
    strcpy(person2.gender,"male");
    person1.age[0]=20;
    person2.age[0]=21;
    person1.id[0]=20240001;
    person2.id[0]=20240002;
    cout << person1.name<<endl;
    cout << person1.gender<<endl;
    cout << person2.name<<endl;
    cout << person2.gender<<endl;
    cout << person1.age[0]<<endl;
    cout << person2.age[0]<<endl;
    cout << person1.id[0]<<endl;
    cout << person2.id[0]<<endl;

    return 0;

}

// Created by 86138 on 2024/3/16.
//
