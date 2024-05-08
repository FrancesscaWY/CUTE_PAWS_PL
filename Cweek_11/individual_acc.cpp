#include <iostream>
#include <cmath>

using namespace std;

class SavingsAccount {
public:
    SavingsAccount(int date, int id, double rate);

    int getId() { return id; }

    double getBalance() { return balance; }

    double getRate() { return rate; }

    void deposit(int date, double amount);

    void withdraw(int date, double amount);

    void settle(int date);//结算利息
    void show();

private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;

    void record(int date, double amount);

    double accumulate(int date) const {
        return accumulation + balance * (date - lastDate);//计算从上次结算到date的存款金额
    }
};

SavingsAccount::SavingsAccount(int date, int id, double rate)
        : id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
    cout << date << "\t#" << id << " is created" << endl;//输出创建日期和账户号,"\t#"is tab键
}
void SavingsAccount::record(int date,double amount){//记录一笔账
    accumulation=accumulate(date);
    lastDate=date;
    amount=floor(amount*100+0.5)/100;//保留两位小数
    //floor(),向下取整，返回不大于x的最大整数值
    balance+=amount;
    cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}
void SavingsAccount::deposit(int date,double amount){
    record(date,amount);
}
void SavingsAccount::withdraw(int date,double amount){
    if(amount > balance){
        cout << "Error: not enough money" << endl;
    }else{
        record(date,-amount);
    }
}
void SavingsAccount::settle(int date){
    double interest=accumulation*rate/365;//计算利息,每日结算
    if(interest!=0){
        record(date,interest);
    }
    accumulation=0;
}
void SavingsAccount::show(){
    cout << "#" << id  << "\tBalance: " << balance << endl;
}
int main(){
    SavingsAccount sa0(1,21325302,0.015);
    SavingsAccount sa1(1,58320212,0.015);
    sa0.deposit(5,5000);
    sa1.deposit(25,10000);
    sa0.deposit(45,5500);
    sa1.withdraw(60,4000);
    sa0.settle(90);//结算利息
    sa1.settle(90);
    sa0.withdraw(100,7000);
    sa0.show();cout << endl;
    sa1.show();cout << endl;
    return 0;
}
//
// Created by 86138 on 2024/5/8.
//
