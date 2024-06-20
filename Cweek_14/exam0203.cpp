#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node * next;
    Node(int intData):data(intData),next(NULL){ }
};
class intQueue{
public:
    intQueue():head(NULL),tail(NULL){}
    bool isEmpty( ) const{return head==NULL;}
    void enQueue(int intData);
    bool dequeue(int &intData);
    void show(ostream &os=cout)const;
private:
    Node *head;
    Node *tail;
};
void intQueue::enQueue(int intData){
    if(isEmpty()){
        head=tail=new Node(intData);
        //改变指针的指向而不是赋值
    }else{
        tail=tail->next=new Node(intData);
        //首先将尾指针对象的next指针成员指向新插入的数据，在将尾指针指向next指针
    };
}
bool intQueue::dequeue(int &intData){
    if(isEmpty()){return false;}
    intData=head->data;
    Node *p=head;
        //声明p指针指向需要删除数据的物理位置
    head=head->next;
        //让头指针指向头指针的下一个指针
    delete p;
}
void intQueue::show(ostream &os=cout) const{
    Node *p=head;
    while(p){
        os << p->data << " ";
        p=p->next;
    }
    return;
}
int main(){
    intQueue que;
    cout << "刚建立时：";
    que.show();
    que.enQueue(8);
    que.enQueue(3);
    cout << "添加8和3以后：";
    que.show();
    que.enQueue(5);
    
}






























