#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int _win[7];
    cin >> _win[0] >> _win[1] >> _win[2] >> _win[3] >> _win[4] >> _win[5] >> _win[6];
    int lottery[n][7];
    for (int i = 0; i < n; i++) {
        cin >> lottery[i][0] >> lottery[i][1] >> lottery[i][2] >> lottery[i][3] >> lottery[i][4] >> lottery[i][5]
            >> lottery[i][6];
    }
    int prize[7] = {0};
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            for (int &k: _win) {//遍历数组
//                cout << count << endl;
                if (lottery[i][j] == k) {
//                    cout << count << " "<< lottery[i][j] << endl;
//                    k = 0;
                    count++;//将已经匹配的数置为0
                }
            }
        }
//        count --;
//        cout << count << endl;
        switch (count) {
            case 7:
                prize[0]++;
                break;
            case 6:
                prize[1]++;
                break;
            case 5:
                prize[2]++;
                break;
            case 4:
                prize[3]++;
                break;
            case 3:
                prize[4]++;
                break;
            case 2:
                prize[5]++;
                break;
            case 1:
                prize[6]++;
                break;
            default:
                break;
        }
        count =0;
    }
    for (int i: prize) {//遍历数组
        cout << i << " ";
    }
    return 0;

}
//
// Created by 86138 on 2024/5/1.
//
