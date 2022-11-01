#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string k;
        getline(cin, k);
        if(k == "Another Contest"){
            cout << "AC" << endl;
        }
        else
            cout << "WA" << endl;
    }
}