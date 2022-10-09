#include <bits/stdc++.h>

using namespace std;

double people[35];
int main() {
    double pie = 1;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        people[a-1] += pie * b/100;
        pie -= pie * b/100;
    }
    for(int i=0; i<n; i++){
        cout << people[i] << "\n";
    }
    return 0;
}