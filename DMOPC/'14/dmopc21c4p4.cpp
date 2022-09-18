#include <bits/stdc++.h>
using namespace std;

int trees[1000005]={};
int main(){
    int n, q;
    cin >> n;
    for(int i=1; i<n+1; i++){
        int k;
        cin >> k;
        trees[i] = trees[i-1]+k;
    }
    cin >> q;
    for(int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;
        cout << trees[b+1]-trees[a] << "\n";
    }
}