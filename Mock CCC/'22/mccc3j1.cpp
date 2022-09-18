#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin >> n >> i >> j;
    if (abs(i*i-n)>abs(j*j-n))
        cout << "2" << "\n";
    else
        cout << "1" << "\n";
    return 0;
}