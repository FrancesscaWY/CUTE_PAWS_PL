#include <iostream>
#include <string>
using namespace std;
class Animal{
protected:
    string m_name;
    Animal(string name):m_name{name}{

    }
    Animal(const Animal&)=default;//copy constructor, copy the name
    Animal& operator=(const Animal&)=default;//copy assignment operator, copy the name
public:
    string getName()const{return m_name;}
    string Speak() const{return "???";}
};
class Cat:public Animal{
public:
    Cat(string name):Animal{name}{

    }
    string Speak()const{return "Meow";}

};
class Dog:public Animal{
public:
    Dog(string name):Animal{name}{

    }
    string Speak()const{return "Woof";}
};

int main(){
    Cat cat("Francesca");
    cout << "cat is named" << cat.getName() << ",and she says " << cat.Speak() << endl;
    Dog dog("Bailey");
    cout << "dog is named" << dog.getName() << ",and he says " << dog.Speak() << endl;
    return 0;
}