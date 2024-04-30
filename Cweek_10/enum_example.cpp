#include <iostream>
using namespace std;
enum GameResult{win,lose,tie,cancel};
int main(){
    GameResult result;
    enum GameResult omit=cancel;

    for(int count=win;count<=cancel;count++){
        result=GameResult(count);
        if(result==omit){
            cout << "The game was cancelled" << endl;
        }else{
            cout << "The game was played"<<endl;
            if(result==win){
                cout << "and we won!"<<endl;
            }
            if(result==lose){
                cout << "and we lost!"<<endl;
            }
            if(result==tie){
                cout << "and it was a tie!";
                cout << endl;
            }
        }
    }
    return 0;
}
//
// Created by 86138 on 2024/4/30.
//
