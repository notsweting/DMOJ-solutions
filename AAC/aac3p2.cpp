#include <bits/stdc++.h>
using namespace std;

int d, k;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> d;

    int w=1e9;
    int z=1e9;

    for(int i=0; i<d; i++){
        int l;
        cin >> l;
        z = min(l, z);
        if(l != 0){
            w = min(l, w);
        }
    }

    if(w == 1e9){
        cout << -1 << endl;
    }
    else{
        string ans = "";
        ans += '0'+w;        
        for(int i=1; i<k-1; i++){
            ans += '0'+z;
        }
        if(ans.size() <k ) ans += '0'+w;

        cout << ans << endl;
    }
}