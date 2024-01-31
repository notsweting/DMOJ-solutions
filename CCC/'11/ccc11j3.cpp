#include <bits/stdc++.h>
using namespace std;

int t1, t2;

int main(){
    int cur, prev, prev2, cnt = 1;
    cin >> prev2 >> prev;

    cur = prev2 - prev;
    
    for(;cur<=prev;cnt++){
        int diff = prev - cur;
        prev2 = prev;
        prev = cur;
        cur = diff;
    }

    cout << cnt+2;
}