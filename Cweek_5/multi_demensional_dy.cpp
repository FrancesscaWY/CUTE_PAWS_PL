#include <iostream>
using namespace std;
int main(){
    int m,n,l;
    cin >> m >> n >> l;
    int *array = new int [m];
    for(int i=0;i<m;i++){
        cin >> array[i];
        cout << array[i] << " " ;
    }
    delete [] array;
    int **two_array;
    two_array = new int *[m];
    for(int j=0;j<m;j++){
        two_array[j] = new int [n];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> two_array[i][j];
            cout << two_array[i][j] << " ";
        }
    }

    for(int i=0;i<m;i++){
        delete[] two_array[i];
    }
    delete[] two_array;

    int ***three_array;
    three_array = new int **[m];
    for(int i=0;i<m;i++){
        three_array[i]=new int *[n];
        for(int k=0;k<n;k++){
            three_array[i][k]= new int [l];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<l;k++) {
                cin >> three_array[i][j][k];
                cout << three_array[i][j][k] << " ";
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;i<n;j++){
            delete[] three_array[i][j];
        }
        delete[] three_array[i];
    }
    delete[] three_array;
    return 0;
}
// Created by 86138 on 2024/3/29.
//
