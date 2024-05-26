#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> v;
    v.emplace_back("cPlusPlus");
    v.emplace_back("Java");
    v.emplace_back("Python");
    for(const auto& s:v){
        cout << s << endl;
    }
    return 0;
}
