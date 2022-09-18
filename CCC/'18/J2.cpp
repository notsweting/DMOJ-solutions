#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
    string k, l;
    cin >> n >> k >> l;
    for(int i=0; i<n; i++){
        if(k[i]=='C'&&l[i]=='C'){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}