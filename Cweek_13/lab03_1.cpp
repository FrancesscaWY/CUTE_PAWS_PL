#include <iostream>
#include "lab03_1.h"
using namespace std;
int main() {
    StringSet stringSet1({"cPlusPlus", "Java", "Python","JS"});
    StringSet stringSet2({"C", "C++", "Java","PHP","JS"});
    StringSet ss3 = stringSet1 + stringSet2;
    StringSet ss4=stringSet1*stringSet2;
    cout << "The output of calling display(): " << endl;
    stringSet1.display();
    cout << "The output of calling getSize(): " << endl;
    stringSet1.getSize();
    cout << "The output after calling delete function: " << endl;
    stringSet1.deleteStr("Java");
    stringSet1.display();
    cout << "The output after calling Add_Str function: " << endl;
    stringSet1.Add_Str("hello");
    stringSet1.display();
    cout << "The output after calling clearAll function: "<<endl;
    stringSet2.clearAll();
    stringSet2.display();
    cout << "The output after calling overload '*' : " << endl;
    ss4.display();
    cout << "The output after calling overload '+' : " << endl;
    ss3.display();
    return 0;
}
//
// Created by 86138 on 2024/5/25.
//
