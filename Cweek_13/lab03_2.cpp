#include <iostream>
#include <stdexcept>
using namespace std;
template <class T>
class Vector{
public:
    T add(T data){
        if(size==capacity){
            //如果数组已满,则扩容
            capacity=capacity*2;
            T* new_arr=new T[capacity];//创建一个新的数组的指针，指向一个新的数组，新数组的大小是原数组的两倍
            for(size_t i=0;i<size;i++){
                new_arr[i]=arr[i];//n将原数组的元素复制到新数组中，这样就完成了数组的扩容
            }
            delete[] arr;//删除原数组的指针，释放原数组的内存，但是原数组的内容还在
            //为什么要删除原数组，因为原数组的内存空间不够用了，所以要重新分配内存空间
            arr=new_arr;//将新数组的指针赋值给arr，这样arr就指向了新数组
        }
        //为什么前面删除了原数组,这里还能在原数组上添加元素?，因为前面的delete只是删除了原数组的指针，而原数组的内容还在，所以可以在原数组上添加元素
        //如果前面的delete删除了原数组的内容，那么这里就不能在原数组上添加元素了
        //扩容的不是new_arr,而是arr，为什么，因为arr是一个指针，指向一个数组，所以扩容的是数组，而不是指针
        //new_arr只是一个指针，指向一个数组，数组的名字是arr
        arr[size]=data;//将新元素添加到数组中
        size++;//元素个数加1
        return arr[size-2];
    }
    void remove(size_t index){
        if(index>=size){
            throw out_of_range("index out of range");
        }
        for(size_t i=index;i<size-1;i++){
            arr[i]=arr[i+1];//将index后面的元素向前移动一位
        }
        size--;//元素个数减1
    }
    size_t get_size()const{
        //返回元素的个数,而不是数组的大小
        return size;
    }
    T& operator[](size_t index){
        if(index>=size){
            throw out_of_range("index out of range");
        }
        return arr[index];
    }
private:
    T* arr;//arr用于存储元素，是一个指针，指向一个数组，数组的类型是T，T是一个模板类型，可以是任意类型，比如int，double，string等
    size_t size=0;//size_t是一个无符号整数类型,用来表示数组的大小
    size_t capacity=1;//size_t是一个无符号整数类型,用来表示数组的容量
};
int main()
{
    Vector<int> vint;
    int n,m;
    cin >> n >> m;
    for ( int i=0; i<n; i++ ) {
        // add() can inflate the vector automatically
        vint.add(i);
    }
    // get_size() returns the number of elements stored in the vector
    cout << vint.get_size() << endl;
    cout << vint[m] << endl;
    // remove() removes the element at the index which begins from zero
    vint.remove(m);
//    vint.add(-1);
    cout << vint.add(-1) << endl;
//cout << vint[m]<< endl;
    cout << vint[m] << endl;
    Vector<int> vv = vint;
    cout << vv[vv.get_size()-1] << endl;
    vv.add(m);
    cout << vint.get_size() << endl;
    return 0;
}
