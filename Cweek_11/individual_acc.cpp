#include <iostream>
#include <cmath>
using namespace std;
class SavingsAccount{
public:
    SavingsAccount(int date,int id,double rate);
    int getId(){return id;}
    double getBalance(){return balance;}
private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;
    void record(int date,double amount);
    double accumulate(int date) const{
        return accumulation+balance*(date-lastDate);
    }
};

//
// Created by 86138 on 2024/5/8.
//
