#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y){
    return x>y;
}
int main(){
    int n;
    int tides[105] = {};
    vector <int> high, low;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tides[i];
    }
    sort(tides, tides+n);
    for(int i=0; i<n; i++){
        int modifier;
        n%2==0 ? modifier = 0 : modifier = 1;
        if(i < (n/2)+modifier){
            low.push_back(tides[i]);
        }
        else
            high.push_back(tides[i]);
    }

    sort(low.begin(), low.end(), cmp);
    for(int i=0, h=0, l=0; i<n; i++){
        if(i%2==0){
            cout << low[l];
            l++;
        }
        else{
            cout << high[h];
            h++;
        }
        cout << " ";
    }
}