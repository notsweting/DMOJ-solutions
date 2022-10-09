#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, n, j, stations[100005]={}, ans=0;
    cin >> i >> n >> j;
    for(int l=0; l<j; l++){
        int a, b, c;
        cin >> a >> b >> c;
        stations[a-1] += c;
        stations[b] -= c;
    }
    if(stations[0]<n)
        ans++;
    for(int l=1; l<i; l++){
        stations[l] += stations[l-1];
        if(stations[l] < n)
            ans++;
    }
    cout << ans;
}