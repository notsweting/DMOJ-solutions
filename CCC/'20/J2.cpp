#include<bits/stdc++.h>
using namespace std;

int main() {
    int p,n,r,in,d;
    cin >> p >> n >> r;
    d=n;
    in=n;
    for(int i=0; i<p; i++){
        in+=(d*r);

        d = d*r;

        if (in > p){
            cout << i+1;
            return 0;
        }   
    }
    return 0;
}