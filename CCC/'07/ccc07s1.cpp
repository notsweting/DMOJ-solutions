#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i=0; i<n; i++){
        int y, m, d;

        cin >> y >> m >> d;

        if(y < 2007-18 || (y == 2007-18 && ((m < 2) || (m == 2 && d <= 27)))){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}