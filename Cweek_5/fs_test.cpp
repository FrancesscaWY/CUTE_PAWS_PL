#include <iostream>
#include <fstream>
using namespace std;
int main() {

    fstream file;
    file.open("file_one.txt", ios::in | ios::out | ios::trunc);
    if (!file.is_open()) {
        cout << "Fail to open the file." << endl;
        return -1;
    }

    string article;
    cin >> article;
    cin.ignore();

    file << article << endl;

    file.seekg(0, ios::beg);

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}
//    char word[1000];
//    fstream _text;
//    _text.open("learn.dat",ios::out|ios::in);
//    cout << "Writing to the file: " << endl;
//    cout << "Enter you word: " << endl;
//    cin >> word;
//    cin.ignore();
//    _text << word << endl;
//
//    _text.close();
//
//    fstream in_text;
//    in_text.open("learn.dat");
//
//    cout << "reading from the file: " << endl;
//    in_text >> word;
//    cout << word;
//
//    in_text.close();
// Created by 86138 on 2024/3/26.
//
