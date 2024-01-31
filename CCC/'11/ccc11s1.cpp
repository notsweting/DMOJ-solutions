#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, t=0, s=0;
    string k="";
    cin >> n;
    for(int i=0; i<n+1; i++){
        getline(cin, k);
        for(int j=0; j<k.size(); j++){
            if(k[j]=='t'||k[j]=='T'){
                t++;
            }
            else if(k[j]=='s'||k[j]=='S'){
                s++;
            }
        }
    }
    t>s?cout<<"English":cout<<"French";
    return 0;

}