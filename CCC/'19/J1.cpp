#include<bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, at, bt;
    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;
    at = a3*3+a2*2+a1;
    bt = b3*3+b2*2+b1;
    if(at==bt)
        cout << 'T';
    else if(at>bt)
        cout << 'A';
    else
        cout << 'B';
    
    return 0;
}