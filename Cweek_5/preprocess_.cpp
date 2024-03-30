#include <iostream>
using namespace std;
#define DEBUG
#define MIN(a,b) (((a)>(b))?a:b)
int main(){
    int i=9;
    int j=20;
#ifdef DEBUG
    cerr << "Trace inside main function." << endl;
#endif

#if 0 //注释掉原有的DEBUG
   cout << MKSTR(HELLO C++) << endl;
#endif
    cout << "The minimum is " << MIN(i,j) << endl;

#ifdef DEBUG
    cerr << "Come out of main function" << endl;
#endif
    return 0;
}
// Created by 86138 on 2024/3/30.
//
