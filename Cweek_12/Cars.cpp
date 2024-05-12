#include <iostream>

using namespace std;

class Vehicle {
public://声明为public，否则子类无法访问
    Vehicle() : MaxSpeed(0), Weight(0) {cout << "Vehicle constructor" << endl;};//构造函数
    ~Vehicle() {cout << "Vehicle destructor" << endl;};//析构函数
    void Run() {cout << "Vehicle is running" << endl;};
    void Stop() {cout << "Vehicle has stopped" << endl;};
protected://声明为protected，否则子类无法访问
    int MaxSpeed;
    int Weight;
};
class bicycle : virtual public Vehicle {//虚继承,防止二义性
public:
    bicycle(int ms = 0, int w = 0, int h = 0) : height(h) {//构造函数，初始化列表，初始化height
        MaxSpeed = ms;
        Weight = w;
        height = h;
        cout << "bicycle constructor" << endl;
        cout << "bicycle's height is " << height << endl;
        cout << "bicycle's MaxSpeed is " << MaxSpeed << endl;
        cout << "bicycle's Weight is " << Weight << endl;
    };
    ~bicycle() {cout << "bicycle destructor" << endl;};//析构函数
    void Run(){cout << "bicycle is running" << endl;}//重载函数，覆盖父类的Run函数
    void Stop(){cout << "bicycle has stopped" << endl;}//重载函数，覆盖父类的Stop函数
protected:
    int height;
};
class motorcar : virtual public Vehicle {//虚继承,防止二义性
public://声明为public，否则子类无法访问
    motorcar(int ms, int w, int sn) : SeatNum(0) {//构造函数，初始化列表，初始化SeatNum
        MaxSpeed = ms;
        Weight = w;
        SeatNum = sn;
        cout << "motorcar constructor" << endl;
        cout << "motorcar's SeatNum is " << SeatNum << endl;
        cout << "motorcar's MaxSpeed is " << MaxSpeed << endl;
        cout << "motorcar's Weight is " << Weight << endl;
    };
    ~motorcar() {cout << "motorcar destructor" << endl;};//析构函数
protected://声明为protected，否则子类无法访问
    int SeatNum;
};

class motoCycle :public bicycle,  public motorcar {
public://声明为public，否则子类无法访问
    motoCycle(int ms1, int w1, int sn1,int h) : motorcar(ms1, w1, sn1), bicycle(ms1, w1, h){
    //构造函数，初始化列表，初始化SeatNum，MaxSpeed，Weight，height
        MaxSpeed = ms1;
        Weight = w1;
        height = h;
        SeatNum = sn1;
        cout << "motoCycle constructor" << endl;
        cout << "motoCycle's SeatNum is " << SeatNum << endl;
        cout << "motoCycle's MaxSpeed is " << MaxSpeed << endl;
        cout << "motoCycle's Weight is " << Weight << endl;
        cout << "motoCycle's height is " << height << endl;
    };
    ~motoCycle() {cout << "motoCycle destructor" << endl;};
};
int main(){
    cout << "========================Vehicle v======================" << endl;
    Vehicle v;
    v.Run();
    v.Stop();
    cout << "========================bicycle b(10, 20, 3)======================" << endl;
    bicycle by(10,15,3);
    by.Run();
    by.Stop();
    cout << "========================motorcar m(50, 100, 4)======================" << endl;
    motorcar mt(50, 100, 4);
    cout << "=============motoCycle mc(100, 200, 2, 1)=============" << endl;
    motoCycle mc(100, 200, 2, 1);
    mc.Run();
    mc.Stop();
    return 0;
}