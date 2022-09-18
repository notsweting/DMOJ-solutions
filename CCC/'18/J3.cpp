#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k, l;
    cin >> i >> j >> k >> l;
    cout << 0 << " " << i << " " << i+j << " " << i+j+k << ' ' << i+j+k+l << endl;
    cout << i << " " << 0 << " " << j << " " << j+k << ' ' << j+k+l << endl;
    cout << i+j << " " << j << " " << 0 << " " << k << ' ' << k+l << endl;
    cout << i+j+k << " " << j+k << " " << k << " " << 0 << ' ' << l << endl;
    cout << i+j+k+l << " " << j+k+l << " " << k+l << " " << l << ' ' << 0 << endl;
    return 0;
}