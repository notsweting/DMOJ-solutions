#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, walk=0;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        char m;
        cin >> m;
        if (m=='U'&&k!=0)
            k--;
        else if (m=='D')
            k++;
        if (k==0)
            walk++;      
    }
    cout << walk << "\n";
    return 0;
}