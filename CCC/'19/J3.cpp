#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string k;
    char p;
    int m;
    for(int i=0; i<n; i++){        
        cin >> k;
        m = 0;
        for(char l : k){
            if(m > 0 && l!=p){
                cout << m << ' ' << p << ' ';
                m=0;
            }
            p=l;
            m++;
        }
        cout << m << ' ' << p << ' ' << endl;
    }
    return 0;
}