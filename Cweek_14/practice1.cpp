#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

//每个Node对象都有一个data数据和一个指针，这个指针是Node类型的指针，指向下一个Node对象
    Node(int intData) : data(intData), next(NULL) {}
};//NULL是一个空指针，指向空地址

class intQueue {
private:
    Node *head;
    Node *tail;
    //所有Node类型的指针，指向一个Node对象，而每一个Node对象包含了一个int类型的数据和一个指向下一个Node对象的指针
public:
    intQueue() : head(NULL), tail(NULL) {}

    bool isEmpty() const { return head == NULL; }

    //如果head==NULL，返回真，否则返回假
    void enQueue(int intData);

    bool dequeue(int &intData);//这里为什么要用引用，因为要修改intData的值，所以要用引用，不然只是传值，不会改变原来的值
    void show(ostream &os = cout) const;//这里为什么要用ostream& os=cout，因为这里是一个默认参数，如果不传参数，就默认是cout
    //os 为ostream类型的引用，cout 是ostream类型的对象
};

void intQueue::enQueue(int intData) {
    if (isEmpty()) {
        head = tail = new Node(intData);
        //头指针和尾指针都指向新插入的Node对象
    } else {
        tail = tail->next = new Node(intData);
        //否则尾指针会被复制给该尾指针指向对象的next成员指针，next指针也为Node型，
        //通过调用构造函数复制，指向一个Node类型的对象；也就是说尾指针指针指向了一个新的Node对象，该对象依然含有data和next成员
    }
}

bool intQueue::dequeue(int &intData) {//为什么为什么要用引用，因为要修改intData的值，所以要用引用，不然只是传值，不会改变原来的值
    if (isEmpty()) return false;
    //如果为空，返回假
    intData = head->data;
    //将头指针指向的Node对象的data成员赋值给intData
    Node *p = head;
    //再将头指针指向地址复制给新的Node型指针P，p指向head指针指向的Node对象
    head = head->next;
    //将head指针指向的Node对象中的next指针指向的位置复制给head指针，意味着head指针指向了下一个Node对象
    delete p;//这里删除的是指针还是Node对象？删除的是指针，指向的是Node对象
    //如果删除指针，指针指向的对象不会被删除，那为什么这里可以删除节点？因为这里是删除指针，指针指向的对象会被删除
    //删除P指向的Node对象，释放内存
    return true;
}

void intQueue::show(ostream &os) const {
    Node *p = head;
    //声明一个Node类型的指针p,指向head指针指向的Node对象
    while (p) {
        os << p->data << " ";//输出p指针指向的Node对象的data成员
        p = p->next;//将p指针指向的Node对象的next制作赋值给p指针
        //next为一个指向Node对象的指针，指向下一个Node对象
        //因此p指针指向下一个Node对象
    }
    return;
}

int main() {
    intQueue que;
    cout << "刚建立时：";
    que.show();
    que.enQueue(8);
    que.enQueue(3);
    cout << "添加8，3后：";
    que.show();
    que.enQueue(5);
    cout << "添加5后：";
    que.show();
    int x;
    que.dequeue(x);
    cout << "删除首元素" << x << "后：";
    que.show();
    que.enQueue(-7);
    cout << "添加-7后：";
    que.show();
    que.dequeue(x);
    cout << "删除首元素" << x << "后：";
    que.show();
    return 0;
}
//
// Created by 86138 on 2024/5/30.
//
