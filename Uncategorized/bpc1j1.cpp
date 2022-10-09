#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c=0;
    cin >> n;
    for(int i=0; i<n; i++){
        string k;
        cin >> k;
        if(k=="face"){
            c++;
        }
    }
    cout<<c;
    
    

    
    return 0;
}