#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, max=0;
    string temp, winner;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        cin >> k;
        if (k>max){
            max=k;
            winner=temp;
        }
    }
    cout << winner;
    return 0;
}