#include <iostream>

using namespace std;

class CPU {
public:
    unsigned int clockFrequency: 12;//，题目要求最大值为3000,3000位于2^11-1=2047到2^12-1=4095之间，将12位用于存储，限制了最大值
    unsigned int coreNum: 3;//，题目要求最大值为4，4位于2^2-1=3到2^3-1=7之间，将3位用于存储，限制了最大值
    bool WordLength: true;//将WordLength设为布尔值，true表示64位，false表示32位
    bool isThreads: true;//将isThreads设为布尔值，true表示支持多线程，false表示不支持多线程
    CPU(int c, int n, bool w, bool t) : clockFrequency(c), coreNum(n), WordLength(w), isThreads(t) {
        clockFrequency = c;
        coreNum = n;
        WordLength = w;
        isThreads = t;
    }

    void show() {//输出类属性函数
        cout << "clockFrequency: " << clockFrequency << endl;
        cout << "coreNum: " << coreNum << endl;
        if (WordLength)//WordLength为1时输出64位，否则输出32位
            cout << "WordLength: 64" << endl;
        else
            cout << "WordLength: 32" << endl;
        cout << "isThreads: " << isThreads << endl;
    }
};

int main() {
    CPU cpu(3000, 4, true, true);
    cpu.show();//调用成员函数输出类属性
    cout << sizeof(cpu) << endl;//输出类对象占用内存大小
    return 0;
}