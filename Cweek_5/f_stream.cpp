#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char word[1000];
//    string word;

    ofstream test_file;
    test_file.open("test_file.dat");

    cout << "Written something:" << endl;
    cout << "Enter you name:" << endl;
//    cin.getline(word);
    cin.getline(word,1000);

    test_file << word << endl;

    cout << "Enter your age: " << endl;
    cin >> word;
    cin.ignore();

    test_file << word << endl;

    test_file.close();

    ifstream infile;
    infile.open("test_file.dat");

    cout << "Reading from the file" << endl;
    infile >> word;
    cout << word << " ";

    infile >> word;
    cout << word << endl;
    infile.close();

    return 0;
}
// Created by 86138 on 2024/3/26.
//
