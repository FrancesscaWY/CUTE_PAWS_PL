#include <iostream>
#include <vector>
using namespace std;
class Obj{
    static int i,j;
public:
    void f(){cout << i++ << endl;}
    void g(){cout << j++ << endl;}
};

int Obj::i=10;
int Obj::j=20;

class ObjContainer{
    vector<Obj*> a;//对象容器
public:
    void add(Obj* obj){//向容器中添加对象
        a.push_back(obj);//将对象指针添加到容器中
    }
    friend class SmartPointer;
};

class SmartPointer{
    ObjContainer oc;
    int index;
public:
    SmartPointer(ObjContainer& objc){
        oc=objc;
        index=0;
    }

    bool operator++(){
        if(index>=oc.a.size()) return false;
        if(oc.a[++index]==0) return false;
        return true;
    }//重载++运算符，返回值为bool类型，返回是否越界

    Obj* operator->() const{
        if(!oc.a[index]){
            cout << "Zero value" << endl;
            return (Obj*)0;
        }
        return oc.a[index];//返回容器类里面的对象类的对象指针
    }
};
int main(){
    const int sz=10;
    Obj o[sz];
    ObjContainer oc;
    for(int i=0;i<sz;i++){
        oc.add(&o[i]);//将对象指钋添加到容器中
    }
    SmartPointer sp(oc);//创建智能指针
    do{
        sp->f(); //调用f()函数
        sp->g();
    }while(++sp);
    return 0;
}

// Created by 86138 on 2024/3/23.
//
