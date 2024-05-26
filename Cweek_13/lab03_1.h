//
// Created by 86138 on 2024/5/25.
//
#include <iostream>
#include <vector>
using namespace std;
#ifndef CWEEK_13_LAB03_1_H
#define CWEEK_13_LAB03_1_H
class StringSet {
public:
    //构造函数,以字符串类型的vector为参数
    StringSet(const vector<string> &strVec);

    //explicit关键字的作用是防止构造函数的隐式转换
    //为什么要加const，因为这个函数不会改变类的成员变量，所以要加const
    ~StringSet();

    void Add_Str(const string &str);

    void deleteStr(const string &str);

    void display() const;

    void clearAll();

    void getSize();

    //overload operator + for stringSet,return a new stringSet that contains all the strings in the two stringSets
    StringSet operator+(const StringSet &ss);
    StringSet operator*(const StringSet &ss);

private:
    vector<string> strSet;
    int size;
};

StringSet::StringSet(const vector<std::string> &strVec) {
    strSet = strVec;
    cout << "StringSet constructor" << endl;
}

StringSet::~StringSet() {
    cout << "StringSet destructor" << endl;
}

void StringSet::Add_Str(const string &str) {
    strSet.emplace_back(str);
}

void StringSet::deleteStr(const string &str) {
    for (auto it = strSet.begin(), end = strSet.end(); it != end; ++it) {
        if (*it == str) {
            strSet.erase(it);
            break;
        }
    }
}

void StringSet::display() const {
    cout << "The set of  string : " ;
    for (const auto &s: strSet) {
        cout << s << " ";
    }
    cout << endl;
}

void StringSet::clearAll() {
    strSet.clear();//清空vector
}

void StringSet::getSize() {
    size = strSet.size();
    cout << "The size of the string set is : " << size << endl;
}

StringSet StringSet::operator+(const StringSet &ss) {
    vector<string> newStrSet;
    newStrSet.insert(newStrSet.end(), strSet.begin(), strSet.end());
    //delete the same string
    for (const auto &s: ss.strSet) {
        bool flag = true;
        for (const auto &s1: strSet) {
            if (s == s1) {
                flag = false;
                break;
            }
        }
        if (flag) {
            newStrSet.insert(newStrSet.end(), s);
        }
    }
    return StringSet(newStrSet);
}
StringSet StringSet::operator*(const StringSet &ss){
    vector<string> newStrSet2;
    for(const auto &s1:strSet){
        bool flag=false;
        for(const auto &s2:ss.strSet){
            if(s1==s2){
                flag=true;
                break;
            }
        }
        if(flag){
            newStrSet2.insert(newStrSet2.end(),s1);
        }
    }
    return StringSet(newStrSet2);
}
#endif //CWEEK_13_LAB03_1_H
