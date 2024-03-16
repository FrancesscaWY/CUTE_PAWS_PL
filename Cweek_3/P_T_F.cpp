#include <iostream>
#include <ctime>
using namespace std;
void get_Second(unsigned long *par);
double Balance(int *arr ,int n);
int main(){
    unsigned long sec;
    int size=10;
    int arr[10]={1,2,3,4,5,78,886,34,56,78};
    double avg=Balance(arr,size);
    cout << avg << endl;
    get_Second(&sec);
    cout << sec << endl;
    return 0;
}
void get_Second(unsigned long *par){
    *par=time(NULL);
    return;//返回当前时间
}
double Balance(int *arr,int n){
    int sum=0;
    int i=0;
    double avg;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=(double)sum/n;
    return avg;
}
