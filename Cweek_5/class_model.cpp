#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using  namespace std;
template <class T>
class Stack{
private:
     vector<T> elems;
public:
    void push(T const&);
    void pop();
    T top() const;
    bool empty() const{
        return elems.emoty();
    }
};

template <class T>
    void Stack<T>::push(T const& elem) {
        elems.push_back(elem);
    }
template <class T>
void Stack<T>::pop() {
    if(elems.empty()){
        throw out_of_range("Stack<>::pop():empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top()const{
    if(elems.empty()){
        throw out_of_range("Stack<>::top():empty stack");
    }
    return elems.back();
}

int main(){
    try{
        Stack<int> intStack;
        Stack<string> StringStack;
        intStack.push(7);
        cout << intStack.top() << endl;

        StringStack.push("THANKS!");
        cout << StringStack.top() << endl;
        StringStack.pop();
        StringStack.pop();

    }
    catch (exception const& ex){
        cerr << "Exception" << ex.what() << endl;
        return -1;
    }
}





// Created by 86138 on 2024/3/30.
//
