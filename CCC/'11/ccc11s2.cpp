#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    cin >> n;
    vector<char> k;
    char l;
    for(int i=0; i<n; i++){
        cin >> l;
        k.push_back(l);
    }
    for(int i=0;i<n;i++){
        cin >> l;
        if(k[i]==l)
            c++;
    }
   cout << c;
}