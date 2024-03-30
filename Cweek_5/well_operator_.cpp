#include <iostream>
using namespace std;

#define MKSTR(x) #x
#define contact(a,b) a##b
int main(){
    int xy=100;
    cout << MKSTR(HELLO C++) << endl;
    cout << contact(x,y) << endl;
    return 0;
}

// Created by 86138 on 2024/3/30.
//

//#include "well_operator_.h"
