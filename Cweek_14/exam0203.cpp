#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int intdata):data(intdata),next(NULL){}
};

class IntQueue{
    Node *head;
    Node *tail;
public:
    IntQueue():head(NULL),tail(NULL){}
    bool isEmpty()const{ return head==NULL; }
    void enqueue(int intdata);
    bool dequeue(int& intdata);
    void show(ostream& os=cout)const;
};

void IntQueue::enqueue(int intdata){
    if(isEmpty())
        head=tail=new Node(intdata);
    else
        tail=tail->next=new Node(intdata);
}

bool IntQueue::dequeue(int& intdata){
    if(isEmpty()) return false;
    intdata=head->data;
    Node *p=head;
    head=head->next;
    delete p;
    return true;
}

void IntQueue::show(ostream& os) const {
    //********333********    【20分】
    Node *p=head;
    while(p){
        os<<p->data<<" ";
        p=p->next;
    }






    //********666********
    return;
}

int main(){
    IntQueue que;
    cout<<"刚建立时："; que.show();
    que.enqueue(8);
    que.enqueue(3);
    cout<<"添加8，3后："; que.show();
    que.enqueue(5);
    cout<<"添加5后："; que.show();
    int x;
    que.dequeue(x);
    cout<<"删除首元素"<<x<<"后：";que.show();
    que.enqueue(-7);
    cout<<"添加-7后："; que.show();
    que.dequeue(x);
    cout<<"删除首元素"<<x<<"后：";que.show();

    return 0;
}

//
// Created by 86138 on 2024/5/30.
//
