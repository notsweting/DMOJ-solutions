#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, grid[105][105] = {};
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    // regular
    if(grid[0][0] < grid[0][1] && grid[0][0] < grid[1][0]){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    //rotated 90deg cw
    if(grid[0][n-1] < grid[0][n-2] && grid[0][n-1] < grid[1][n-1]){
        for(int j=n-1; j>-1; j--){
            for(int i=0; i<n; i++){
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }

    //rotated 180deg cw
    if(grid[n-1][n-1] < grid[n-1][n-2] && grid[n-1][n-1] < grid[n-2][n-1]){
        for(int i=n-1; i>-1; i--){
            for(int j=n-1; j>-1; j--){
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }

    //rotated 270deg cw
    if(grid[n-1][0] < grid[n-1][1] && grid[n-1][0] < grid[n-2][0]){
        for(int i=0; i<n; i++){
            for(int j=n-1; j>-1; j--){
                cout << grid[j][i] << " ";
            }
            cout << endl;
        }
    }
}