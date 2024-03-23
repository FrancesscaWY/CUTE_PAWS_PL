#include <iostream>
using namespace std;
class Distance{
public:
    Distance(){
        feet=0;
        inches=0;
    }
    Distance(int f,int i) {
        feet = f;
        inches = i;
    }
    void display(){
        cout << "Feet:" << feet << " Inches:" << inches << endl;
    }
    Distance operator-(){
        feet=-feet;
        inches=-inches;
        return Distance(feet,inches);
    }

    bool operator >(const Distance& d){
        if(feet>d.feet){
            return true;
        }
        if(feet==d.feet && inches>d.inches){
            return true;
        }
        return false;
    }
private:
    int feet;
    int inches;
};
int main(){
    Distance d1(11,10);
    Distance d2(5,11);
    Distance d3(11,13);
    d1.display();
    -d1;
    d1.display();

    if(d1>d2){
        cout << "d1 is greater than d2" << endl;
    } else{
        cout << "d2 is greater than d1" << endl;
    }

    if(d1>d3){
        cout << "d1 is greater than d3" << endl;
    } else{
        cout << "d3 is greater than d1" << endl;
    }
    return 0;
}
// Created by 86138 on 2024/3/23.
//
