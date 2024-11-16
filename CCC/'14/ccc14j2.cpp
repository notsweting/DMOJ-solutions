#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string s;
    cin >> k >> s;
    int a = count(s.begin(), s.end(), 'A');
    int b = count(s.begin(), s.end(), 'B');

    if(a == b)
        cout << "Tie" << endl;
    else if(a>b)
        cout << "A";
    else
        cout << "B";
}