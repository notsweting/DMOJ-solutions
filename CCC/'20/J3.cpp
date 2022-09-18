#include<bits/stdc++.h>
using namespace std;

int main() {
    int maxx=0, maxy=0, minx=1000, miny=1000, n, x, y;
    string in;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> in;
        auto pos = in.find(',');
        x = stoi(in.substr(0, pos));
        y = stoi(in.substr(pos+1)); 
        maxx = max(maxx, x);
        maxy = max(maxy, y);
        minx = min(minx, x);
        miny = min(miny, y);
    }
    cout << minx-1 << ',' << miny-1 << endl;
    cout << maxx+1 << ',' << maxy+1 << endl;
    return 0;
}