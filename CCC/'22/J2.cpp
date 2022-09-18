#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, g=0, j, k;
    cin >>n;
    for(int i=0; i<n; i++){
        cin >> j >> k;
        if((j*5)-(k*3)>40)
            g++;
    }
    g==n?cout<<g<<'+'<<endl:cout<<g<<endl;

    return 0;
}