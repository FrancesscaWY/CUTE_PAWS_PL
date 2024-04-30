#include <iostream>
using namespace std;
class Complex{
public:
    Complex(const double r, const  int i=0):real(r),imag(i){//这里的构造函数的第二个参数是默认参数，所以可以不传入第二个参数
    }
    void  show(){//输出复数
        if(imag>1){
            cout << real << "+" << imag << "i" << endl;
        }else if(imag==1){//imag为1时，输出+i
            cout << real << "+" << "i" << endl;
        }else if(imag==-1){//imag为-1时，输出-i
            cout << real << "-" << "i" << endl;
        }else if(imag<-1){
            cout << real << imag << "i" << endl;
        }else{
            cout << real << endl;
        }
    }
    void add(Complex c){//复数相加
        real+=c.real;//实部相加
        imag+=c.imag;//虚部相加
    }
private:
    double real;
    double imag;
};
int main(){
    Complex c1(3,5);// // Initialize c1 with complex 3+5i
    Complex c2=4.5; // Initialize c1 with complex 3+5i
    //这里的4.5是一个double类型的常量，但是这里的构造函数的第二个参数是int类型的，所以这里会自动转换为4.5+0i
    c1.add(c2);// Add c1 and c2, and save the result in c1
    c1.show();//Output c1 (the result at this point should be 7.5+5i)
    return 0;
}
//
// Created by 86138 on 2024/4/28.
//
