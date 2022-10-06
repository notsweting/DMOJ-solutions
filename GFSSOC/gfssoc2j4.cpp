#include <bits/stdc++.h>
using namespace std;
 
int episodes[500005];
int main(){
    int n, q;
    cin >> n >> q;
    cin >> episodes[0];
    for(int i=1; i<n; i++){
        int k;
        cin >> k;
        episodes[i] = episodes[i-1]+k;
    }

    for(int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;
        int k = episodes[n-1] - (episodes[b-1] - episodes[a-2]);
        cout << k << endl;
    }
}

