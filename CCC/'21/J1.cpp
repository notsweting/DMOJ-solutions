#include<bits/stdc++.h>
using namespace std;

int main() {
    int b;
    cin >> b;
    cout << 5*b-400 << endl;
    if (b>100)
        cout << "-1";
    else if (b==100)
        cout << "0";
    else
        cout << "1";
    return 0;
}