#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, s=0;
    cin >> n >> m;
    set<string> k;
    for(int i=0; i<n; i++){
        string l;
        cin >> l;
        k.insert(l);
    }
    for(int i=0; i<m; i++){
        int o, a=0;
        cin >> o;
        for(int j=0; j<o; j++){
            string p;
            cin >> p;
            if(k.count(p)==0){
                a++;
            }
        }
        if(a==0){s++;}
    }
    cout << s;
}