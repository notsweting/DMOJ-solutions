#include<bits/stdc++.h>
using namespace std;

int r, c;
set<int> row[30];

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> r >> c;

    for(int i=0; i<r; i++){
        int mask = 0;
        for(int j=0; j<c; j++){
            int x;
            cin >> x;
            mask = (mask << 1) | x;
        }
        row[i].insert(mask);
        if(i>0){
            for(int x : row[i-1]){
                row[i].insert(mask^x);
            }
        }
    }
    cout << row[r-1].size() << endl;
    return 0;
}