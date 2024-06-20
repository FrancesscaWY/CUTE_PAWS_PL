#include <iostream>
#include <string>

using namespace std;

template<typename T, typename U>
//int add(int a,int b){
//	return a+b;
//}
//double add(double a,double b){
//	return a+b;
//}
T add(T x, U y) {
    return x + y;
}

class Animal {
protected:
    string test;

    Animal(const string &name) : m_name(name) {

    }

public:

    string m_name;

    void speak() const {
        cout << "Animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    Dog(const string &name) : Animal(name) {
    }

    Dog operator+(const Dog &dog2) {
        return Dog(this->m_name + " " + dog2.m_name);
    }

    void Bark() const {
        cout << "Woof Woof" << endl;
    }
};

int main() {
//    int value;
    int value = 1;
//    cin >> value;
    int *ptr;
    ptr = &value;
    cout << "*ptr: " << *ptr << endl;
    cout << "ptr: " << ptr << endl;
    char chars[4] = {'1', '2', '3', '4'};
    for (int i = 0; i < 4; i++) {
        cout << chars[i] << " ";
    };
    cout << endl;
    char *arrptr;
    arrptr = chars;
    for (int i = 0; i < 4; i++) {
        cout << *(arrptr + i) << " ";
    }
    cout << endl;
    cout << add(1, 3) << endl;
    cout << add(2.34, 4.11) << endl;
    //reference
    int &reint = value;
    cout << "reint: " << reint << endl;
    reint = 100;
    cout << "the value after change reint: " << value << endl;
    //class Animal,subClass Dog
//	std::string::max_size();
    Dog dog("Bailey");
    dog.speak();
    dog.Bark();
    Dog dog2("Frank");
    Dog dog3 = dog + dog2;
    cout << dog3.m_name << endl;
    Animal *p = new Dog("Bailey");
    cout << p->m_name << endl;
    delete p;
    Animal *pArray = new Dog[3]{{"Fred"},
                                {"Garbo"},
                                {"Misty"}};
    cout << pArray[0].m_name << endl;
    delete[] pArray;


    return 0;
}