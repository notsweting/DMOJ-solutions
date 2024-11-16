#include <bits/stdc++.h>
using namespace std;

long long n;
const int  MM = 1e5+5;
long long P[MM];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    long long mn = 1e9, mx = 0;
    cin >> n;
    for(long long i=2; i<=n; i++){
        cout << "? " << 1 << " " << i << endl;
        cin >> P[i];
        mn = min(mn, P[i]);
        mx = max(mx, P[i]);
    }
    cout << "! ";
    long long div;
    if(mx == n){
        cout << "1 ";
        div = 1;
    }
    else{
        cout << mn << " ";
        div = mn;
    }
    for(long long i=2; i<n; i++){
        cout << P[i]/div << " ";
    }
    cout << P[n]/div << endl;
}