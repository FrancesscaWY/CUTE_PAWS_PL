#include <iostream>
#include <assert.h>
using namespace std;
class S{
public:
    int s;
    S(){
        s1=1;
        s2=2;
        s3=3;
        s=4;
    }
    void fun(){
        cout << "s1="<<s1<<endl;
        cout << "s2="<<s2<<endl;
        cout << "s3="<<s3<<endl;
        cout << "s="<<s<<endl;

    }
public:
    int s1;
private:
    int s2;
protected:
    int s3;
};
class F : protected S{
public:
    int s;
    F(int i){
        S();
        s=i;
    }
    void fun(){
        cout << "s1="<<s1<<endl;
//        cout << "s2="<<s2<<endl;
        cout << "s3="<<s3<<endl;
        cout << "s="<<s<<endl;

    }
};
//static member
class TEST{
    static int x;
public:
    static int y;
    void funct(int x){
        cout << "value of static x is " << TEST::x <<"\n";
        cout << "value of local x is " << x<< "\n";
    }
};
int TEST::x=1;//static member initialization
int TEST::y=4;
//
class A{
public:
    void func();
};
void A::func(){
    cout << "\nmy function\n" ;
}
int g=100;

int main() {
F f(10);
    cout << "f.s="<<f.s<<endl;
//    cout << "f.s1="<<f.s1<<endl;//error
//    cout << "f.s2="<<f.s2<<endl;//error
//    cout << "f.s3="<<f.s3<<endl;//error

//
    S objs;
     objs.s1=10;
    //objs.s2=20;//error
    //objs.s3=30;//error
    //system("pause");
//
    TEST obj;
    int x=3;
    obj.funct(x);
    cout << "\nTEST::y="<<TEST::y;
//
    A r;
    r.func();
    cout << "Hello, World!" << endl;
    {
        int c=10;
        cout << c ;
    }
    typedef int marks;
    marks a,b,sum;
    typedef char  str;
    str N;
    cout << "Enter two numbers: ";
    cin >> a >> b >> N;
    sum = a + b;
    cout << "The sum of " << a << " and " << b << " is "  << sum <<endl;
    cout << "The name is " << N <<endl;
    int g=10;
    cout << ::g<<endl;
    cout << g;
    return 0;
}






























