#include<bits/stdc++.h>
using namespace std;
int s[1000005];

int main() {
    int n, total=0, ntotal=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
        total += s[i];
    }
    if(total%2!=0){
        cout << "Andrew is sad." << endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        ntotal+=s[i];
        if(ntotal==total/2){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "Andrew is sad." << endl;
    return 0;
}