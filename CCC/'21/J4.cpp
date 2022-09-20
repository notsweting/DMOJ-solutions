#include <bits/stdc++.h>
using namespace std;

int main(){
    string k;
    getline(cin, k);
    
    int l = count(k.begin(), k.end(), 'L');
    int m = count(k.begin(), k.end(), 'M');
    int notl=0, notm=0, linm=0, minl=0;
    for(int i=0; i<l; i++){
        if(k[i]=='M'){
            minl++;
            notl++;
        }
        if(k[i]=='S')
            notl++;
    }
    for(int i=l; i<l+m; i++){
        if(k[i]=='L'){
            linm++;
            notl++;
        }
        if(k[i]=='S')
            notl++;
    }

    cout << notl+notm-min(linm, minl);
}
