#include <iostream>

using namespace std;

template<typename T>
class Node {
public:
    T data;
    Node *next;

    Node(T value) : data(value) {
    }
};

template<typename T>
class Stack {
public:
    Stack() : head(NULL), tail(NULL) {}

    bool isEmpty() const { return head == NULL; }

    virtual void push(T element);

    bool pop();

    int getSize() const;

private:
    Node<T> *head;
    Node<T> *tail;
};

template<typename T>
void Stack<T>::push(T element) {
    if (isEmpty()) {
        head = tail = new Node<T>(element);
    } else {
        head->next = head;
        head = new Node<T>(element);
        cout << element << "was pushed." << endl;
    }
}

template<typename T>
bool Stack<T>::pop() {
    if (isEmpty()) {
        return false;
    } else {
        Node<T> *ptr;
        ptr = head;
        head = head->next;
        delete ptr;
        return true;
    }
}

template<typename T>
int Stack<T>::getSize() const {
    int count = 0;
    Node<T> *p;
    p = head;
    if (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

int main() {
    Stack<int> stack;
    cout << "hello" << endl;
    stack.push(1);
//    cout << stack.head->data << endl;
    stack.push(2);
    stack.push(3);
    cout << stack.getSize() << endl;
    return 0;
}
