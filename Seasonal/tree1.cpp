#include <bits/stdc++.h>
using namespace std;
int matrix[5][5];
int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> matrix[i][j];
        }
    }
    if(matrix[0][1]+matrix[0][2]+matrix[0][3]+matrix[1][3]+matrix[2][3]+matrix[1][2]!=3){
        cout << "No";
        return 0;
    }
    for(int i=0; i<4; i++){
        if(matrix[i][0]==0&&matrix[i][1]==0&&matrix[i][2]==0&&matrix[i][3]==0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}