#include <iostream>
using namespace std;
class Base{
protected:
    int my_value;
public:
    Base(int value):my_value{value}{

    }
    string getName(){
        return "Base";
    }
    int getValue(){
        return my_value;
    }
};
class Derived:public Base{
public:
    Derived(int value):Base{value}{

    }
    string getName(){
        return "Derived";
    }
    int getValue(){
        return my_value *2;
    }
};
int main(){
    Base base(5);
    Derived derived(5);
    cout << "Base is a" << base.getName() << endl;
    cout << "Base value is" << base.getValue() << endl;
    cout << "Derived is a " << derived.getName() << endl;
    cout << "Derived value is" << derived.getValue() << endl;
    return 0;
}
//
// Created by 86138 on 2024/6/17.
//
