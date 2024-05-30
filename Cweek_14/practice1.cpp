#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int intData) : data(intData), next(NULL) {}
};

class intQueue {
private:
    Node *head;
    Node *tail;
public:
    intQueue() : head(NULL), tail(NULL) {}

    bool isEmpty() const { return head == NULL; }

    void enQueue(int intData);

    bool dequeue(int &intData);//这里为什么要用引用，因为要修改intData的值，所以要用引用，不然只是传值，不会改变原来的值
    void show(ostream &os = cout) const;//这里为什么要用ostream& os=cout，因为这里是一个默认参数，如果不传参数，就默认是cout
};

void intQueue::enQueue(int intData) {
    if (isEmpty()) {
        head = tail = new Node(intData);
    } else {
        tail = tail->next = new Node(intData);
    }
}

bool intQueue::dequeue(int &intData) {
    if (isEmpty()) return false;
    intData = head->data;
    Node *p = head;
}

int main() {

}
//
// Created by 86138 on 2024/5/30.
//
