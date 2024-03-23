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
    Distance operator()(int a,int b,int c){
        Distance D;
        D.feet=a+c+10;
        D.inches=b+c+100;
        return D;
    }

    friend ostream& operator<<(ostream& output,const Distance &d){
        output << "F:" << d.feet << " I:" << d.inches ;
        return output;
    }
private:
    int feet;
    int inches;
};
int main(){
    Distance d1(10,3);
    Distance d2;

    d2=d1(1,3,4);
    cout << d1 << endl;
    cout << d2 << endl;
    return 0;

}
// Created by 86138 on 2024/3/23.
//
