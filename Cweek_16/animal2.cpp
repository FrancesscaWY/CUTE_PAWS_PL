#include <iostream>
#include <string>
using namespace std;
class Animal{
protected:
    string m_name;
    Animal(string name):m_name(name){

    }
public:
    const string& getName() const{return m_name;}
    virtual string Speak()const{return "???";}
};
class Cat:public Animal{
public:
    Cat(string name):Animal(name){

    }
    virtual string Speak()const{return "Meow";}
};
class Dog:public Animal{
public:
    Dog(string name):Animal(name){

    }
    virtual string Speak()const{return "woof";}
};
void report(const Animal& animal){
    cout << animal.getName() << " she says " << animal.Speak() << '\n';
}

int main(){
    Cat cat("Francesca");
    Dog dog("Bailey");
    report(dog);
    report(cat);
    Animal& rAnimal(cat);
    cout << rAnimal.getName() <<" says " <<rAnimal.Speak() << endl;
    Animal* pAnimal(&dog);
    cout << pAnimal->getName() << " says " << pAnimal->Speak() << endl;

    Cat fred("Fred");
    Cat misty("Misty");
    Cat zeke("Zeke");

    Dog garbo("Garbo");
    Dog pooky("Pooky");
    Dog truffle("Truffle");

    Animal* animals[]{&fred,&garbo,&misty,&truffle,&zeke,&pooky};
    for(const auto* animal:animals){
        cout << animal->getName() << " says " << animal->Speak() << endl;
    }
    return 0;
}










//
// Created by 86138 on 2024/6/17.
//
