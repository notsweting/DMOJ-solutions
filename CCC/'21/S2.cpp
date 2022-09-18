#include<bits/stdc++.h>
using namespace std;

int r[5000000]={}, c[5000000]={};

int main() {
    int m, n, k, t1, r1=0, c1=0;
    char t;
    cin >> m >> n >> k;
    for(int i=0; i<k; i++){
        cin >> t >> t1;
        if (t=='R'){
            r[t1-1]=(r[t1-1]+1)%2;
        }
        else{
            c[t1-1]=(c[t1-1]+1)%2;
        }
    }
    for(int i=0; i<max(m, n); i++){
        r1+=r[i];
        c1+=c[i];
    }
    cout << (r1*(n-c1))+(c1*(m-r1));
    return 0;
}