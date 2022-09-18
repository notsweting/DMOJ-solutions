#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m, o, c=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m >> o;
        if(m>o)
            c++;
    }
    cout << c;
}