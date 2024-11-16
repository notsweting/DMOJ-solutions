#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    bool flag = true;
    string ans;
    int m = 1e9;
    while(flag){
        string k;
        int w;
        cin >> k >> w;

        if(w < m){
            ans = k;
            m = w;
        }

        if(k == "Waterloo"){
            flag = false;
        }
    }

    cout << ans << endl;
}