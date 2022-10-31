#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, d;
    cin >> m >> d;
    if(m > 2 || (m==2 && d > 18)){
        cout << "After";
    }
    else if(m == 2 && d == 18)
        cout << "Special";
    else
        cout << "Before";
}