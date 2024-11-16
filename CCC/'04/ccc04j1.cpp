#include<bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    cout << "The largest square has side length " << floor(sqrt(n)) <<"."<< endl;
}