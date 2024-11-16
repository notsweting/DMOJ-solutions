#include <bits/stdc++.h>
using namespace std;

set<int> gates;

int g, p;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> g >> p;

    for(int i=1; i<=g; i++){
        gates.insert(i);
    }

    for(int i=0; i<p; i++){
        int k;
        cin >> k;

        auto it = gates.upper_bound(k);

        if(it == gates.begin()){
            cout << i << endl;
            return 0;
        }

        it--;
        gates.erase(it);
    }

    cout << p << endl;

}