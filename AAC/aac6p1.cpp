#include <bits/stdc++.h>
using namespace std;

long long n, k;
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    long long cnt=0, i;
    for(i=1; i<n; i++){
        cout << i << " ";
        cnt+=i;
    }
    cout << (i+1) + (k-((cnt+i+1)%k)) << endl;

}