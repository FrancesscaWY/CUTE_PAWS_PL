#include <iostream>
#include <cstdlib>

using namespace std;

int RollDice() {
    int sum = 0;
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    sum = die1 + die2;
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}

enum GameStatus {
    WIN, LOSE, PLAYING
};

int main() {
    int sum, myPoint;
    GameStatus status;
    unsigned seed;
    cout << "Enter seed: ";
    cin >> seed;
    srand(seed);
    sum = RollDice();
    switch (sum) {
        case 7:
        case 11:
            status = WIN;
            break;
        case 2:
        case 3:
        case 12:
            status = LOSE;
            break;
        default:
            status = PLAYING;
            myPoint = sum;
            cout << "Point is " << myPoint << endl;
            break;
    }
    if (status == PLAYING) {

        sum = RollDice();
        if (sum == myPoint) {
            status = WIN;
        } else if (sum == 7) {
            status = LOSE;
        }
    }
    if(status==WIN){
        cout << "Player wins" << endl;
    }
    else{
        cout << "Player loses" << endl;
    }
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
