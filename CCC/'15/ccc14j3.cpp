#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 100, d = 100;
    for(int i=0; i<n; i++){
        int ar, dr;
        cin >> ar >> dr;
        if(ar==dr)
            continue;
        ar<dr?a-=dr:d-=ar;
    }
    cout << a << endl << d << endl;
}