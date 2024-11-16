#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t1[100005] = {}, t2[100005] = {}, ans=0, t1c=0, t2c=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t1[i];
    }
    for(int i=0; i<n; i++){
        cin >> t2[i];
    }
    for(int i=0; i<n; i++){
        t1c += t1[i];
        t2c += t2[i];
        if(t1c==t2c)
            ans = i+1;
    }
    cout << ans;
    return 0;
}