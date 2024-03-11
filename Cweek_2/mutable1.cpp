#include <iostream>
using namespace std;
class Art{
public:
    int get_class() const{
        return course_;
    }
    void set_type(int course) const{
        course_=course;
    }
private:
    mutable int course_;//mutable is used to change the value of a const member variable
};
int main(){
    Art a;//create an object of class Art
    a.set_type(1);//change the value of class_ to 1
    cout << a.get_class() << endl;//print the value of class_
    return 0;
}

