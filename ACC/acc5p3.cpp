#include <bits/stdc++.h>
using namespace std;

long long n, k, total;
vector<long long> diff;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    for(long long i=0; i<n; i++){
        long long u, v;
        cin >> u >> v;
        total+=u;
        diff.push_back(u-v);
    }

    sort(diff.begin(), diff.end(), greater());

    for(long long i=0; i<k; i++){
        total-=diff[i];
    }

    cout << total << endl;
}