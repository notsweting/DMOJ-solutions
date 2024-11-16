#include <bits/stdc++.h>
using namespace std;

// 0 is for recieved/sent status, 1 is for recieved time, 2 is for sent time, 3 is for wait time
int friends[105][5];
int main(){
    int n, time=0;
    cin >> n;
    for(int i=0; i<n; i++){
        char r; int c;
        cin >> r >> c;
        if(r == 'R'){
            friends[c][0] = 1;
            friends[c][1] = time;
            time++;
        }
        else if(r == 'S'){
            friends[c][0] = 2;
            friends[c][3] += (time - friends[c][1]);
            time++;
        }
        else{
            time+=c-1;
        }
    }
    for(int i=1; i<101; i++){
        if(friends[i][0] == 2)
            cout << i << " " << friends[i][3] << endl;
        else if (friends[i][0] == 1)
            cout << i << " " << -1 << endl;
    }
}