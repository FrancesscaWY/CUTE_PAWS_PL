#include <iostream>
using namespace std;

class Employee {
public:
    Employee();//���캯��
    ~Employee() = default;//��������
    void setInformation(string name, string address, string city, string postal_code);//setInformation��������
    void Display();//Display��������

private://˽�г�Ա����
    string Name;
    string Address;
    string City;
    string Postal_code;
};

Employee::Employee() {//���캯������ʼ��Ϊ��ֵ
    Name = " ";
    Address = " ";
    City = " ";
    Postal_code = " ";
}
//setInformation�������壬����Employee��Ķ����������Ϣ
void Employee::setInformation(string name, string address, string city, string postal_code) {
    Name = std::move(name);
    Address = std::move(address);
    City = std::move(city);
    Postal_code = std::move(postal_code);
}
//Display�������壬���Employee��Ķ����������Ϣ
void Employee::Display() {
    //��ν������Ʊ����
    cout << "Name: " << Name << endl;
    cout << "Address: " << Address << endl;
    cout << "City: " << City << endl;
    cout << "Postal_code: " << Postal_code << endl;
}

int main() {
    Employee A;//����Employee��Ķ���A����ʼ��Ϊ��ֵ
    cout << "-----���ù��캯����ʼ��Employee��Ķ���AΪ��ֵ-----"<<endl;
    A.Display();//���Employee��Ķ���A��������Ϣ
    cout << endl;
    //����setInformation��������Employee��Ķ���A����Ϣ
    A.setInformation("Tom", "��Դ·19��","����","100084");
    cout << "-----����setInformation��������Employee��Ķ���A����Ϣ-----"<<endl;
    A.Display();
    return 0;
}
//
// Created by 86138 on 2024/5/5.
//
