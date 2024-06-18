#include <iostream>
#include <iomanip>
using namespace std;
class CSnum {
public:
    CSnum(int x0, int y0) : x(x0), y(y0) {}

    //初始化列表不能少
    friend ostream &operator<<(ostream &os, const CSnum &ca) {
        os << setw(5) << ca.x + ca.y;
        return os;
    }
private:
    int x, y;
};
int main() {
    CSnum y(3, 5);
    cout << setfill('*') << 8;
    cout << y;
    CSnum z(4, 5);
    cout << z;
    return 0;
}