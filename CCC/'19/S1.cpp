#include<bits/stdc++.h>
using namespace std;

int main() {
    string k;
    cin >> k;
    int h, v;
    h = count(k.begin(), k.end(), 'H');
    v = count(k.begin(), k.end(), 'V');
    if(h%2==0&&v%2==0)
        cout << 1 << " " << 2 << endl << 3 << " " << 4 << endl;
    else if(h%2==1&&v%2==0)
        cout << 3 << " " << 4 << endl << 1 << " " << 2 << endl;
    else if(h%2==1&&v%2==1)
        cout << 4 << " " << 3 << endl << 2 << " " << 1 << endl;
    else if(h%2==0&&v%2==1)
        cout << 2 << " " << 1 << endl << 4 << " " << 3 << endl;

    return 0;
}