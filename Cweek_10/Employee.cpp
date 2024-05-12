#include <iostream>
//#include <utility>
using namespace std;

class Employee {
public:
    Employee();
    ~Employee() = default;
    void setInformation(string name, string address, string city, string postal_code);
    void Display();

private:
    string Name;
    string Address;
    string City;
    string Postal_code;
};

Employee::Employee() {
    Name = " ";
    Address = " ";
    City = " ";
    Postal_code = " ";
}

void Employee::setInformation(string name, string address, string city, string postal_code) {
    Name = std::move(name);//std::move()�������Խ�һ����ֵת��Ϊ��ֵ����,�������Ա��ⲻ��Ҫ���ڴ濽��,���Ч��
    Address = std::move(address);
    City = std::move(city);
    Postal_code = std::move(postal_code);
}

void Employee::Display() {
    //��ν������Ʊ����
    cout << "Name: " << Name << endl;
    cout << "Address: " << Address << endl;
    cout << "City: " << City << endl;
    cout << "Postal_code: " << Postal_code << endl;
}

int main() {
    Employee A;
    cout << "���ù��캯����ʼ��Employee��Ķ���AΪ��ֵ"<<endl;
    A.Display();
    cout << endl;
    A.setInformation("Tom", "��Դ·19��","����","100084");
    cout << "����setInformation�����޸�Employee��Ķ���A����Ϣ"<<endl;
    A.Display();
    cout << endl;
    cout << "hello" << endl;
    cout << "����setInformation�����ı����A��Name���ԣ��������Ա��ֲ���"<<endl;
    A.setInformation("Jerry", "��Դ·19��","����","100084");
    A.Display();
    Employee B;
//    cout << "���ù��캯����ʼ��Employee��Ķ���BΪ��ֵ"<<endl;
//    B.Display();
//    cout << endl;
    B.setInformation("Alice", "","����","");
    cout << "����setInformation�����޸�Employee��Ķ���B��Name���Ժ�City����"<<endl;
    B.Display();
    cout << "hello" << endl;
    cout << endl;
    cout << "����setInformation������ֵ����B��Postal_code���ԣ��������Ա��ֲ���"<<endl;
    B.setInformation("Alice", "","����","100084");
    B.Display();
    string a,b,c,d;
    cout << "������Name Address City Postal_code: "<<endl;
    cin >> a >> b >> c >> d;
    Employee C;
    C.setInformation(a,b,c,d);
    C.Display();
    return 0;
}
//
// Created by 86138 on 2024/5/5.
//
