#include <bits/stdc++.h>
using namespace std;

bool depend[8][8], done[8]; int cnt[8];

int main(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            depend[i][j] = false;
        }
    }

    depend[1][7] = true;
    depend[1][4] = true;
    depend[2][1] = true;
    depend[3][4] = true;
    depend[3][5] = true;

    cnt[7] = 1;
    cnt[4] = 2;
    cnt[1] = 1;
    cnt[5] = 1;

    while(true){
        int a, b;
        cin >> a >> b;
        cnt[b]++;
        depend[a][b] = true;

        if(a == 0){
            break;
        }
    }

    vector<int> order;

    while(true){
        bool found = false;
        for(int i=1; i<8; i++){
            if(cnt[i] == 0 && !done[i]){
                done[i] = true;
                found = true;
                for(int j=1; j<8; j++){
                    if(depend[i][j]){
                        cnt[j]--;
                        depend[i][j] = false;
                    }
                }
                order.push_back(i);
                break;
            }
        }

        if(!found)
            break;
    }
    
    bool finish = true;

    for(int i=1; i<8; i++){
        if(cnt[i] != 0) 
            finish = false;
    }

    if(finish){
        for(int i:order){
            cout << i << " ";
        }
    }   
    else
        cout << "Cannot complete these tasks. Going to bed.";
    cout << endl;
}