#include <iostream>
using namespace std;

bool isVowel(char letter){
    letter=tolower(letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='0'||letter=='u'){
        return true;
    } else{
        return false;
    }
}

int main(){
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if(isVowel(letter)){
        cout << "The letter is a vowel." << endl;
    }
    else{
        cout << "The letter is a consonant." << endl;
    }
    return 0;
}

// Created by 86138 on 2024/4/2.
//
