#include <bits/stdc++.h>
using namespace std;

const int MM = 1e7+5;

int j, a, cnt;
int jersey[MM];

int main(){
    cin >> j >> a;
    for(int i=1; i<=j; i++){
        char k;
        cin >> k;
        if(k=='S')
            jersey[i] = 1;
        if(k=='M')
            jersey[i] = 2;
        if(k=='L')
            jersey[i] = 3;
        
    }
    for(int i=0; i<a; i++){
        char k;
        int num, v;
        
        cin >> k >> v;
        
        if(k=='S')
            num = 1;
        if(k=='M')
            num = 2;
        if(k=='L')
            num = 3;
            
        if(jersey[v] != -1 && jersey[v] >= num){
            cnt++;
            jersey[v] = -1;}
        
        
    }
    cout << cnt;
}