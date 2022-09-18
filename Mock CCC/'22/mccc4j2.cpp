#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, at=0, bt=0, aa, ba;
    cin >> n >> a >> b;
    for(int i=0; i<n; i++){
        cin >> aa >> ba;
        aa>=a?at+=2:at++;
        ba>=b?bt+=2:bt++;
    }
    if(bt==at){
        cout << "Tie!";
    }
    else if (bt<at){
        cout << "Tommy wins!";
    }
    else
        cout << "Andrew wins!";
    
    cout << endl;
    return 0;
}