#include <iostream>
using namespace std;
template <typename T>
class Base{
protected:
    T m_value;
public:
    Base(T value):m_value(value){
    }
    T getValue()const{return m_value;}
    virtual string getName()const{return "Base";}
//    virtual T display()const=0;
    void interface(){
        static_cast<T*>(this)->display();
    }
};

template <typename T>
class Derived:public Base<T> {
public:
    void implementation(){
        cout << "Derived implementation" << endl;
    }
    Derived(T value):Base<T>(value){

    }
    virtual string getName()const{return "Derived";}
};
int main(){
    Base<int> base(2);
    cout << base.getName();
    return 0;
}