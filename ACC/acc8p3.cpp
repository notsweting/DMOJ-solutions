#include <bits/stdc++.h>
using namespace std;

long long m, q;

string fib;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    cin >> m >> q;

    long long a = 0, b = 1;
    long long c = (a+b)%m; a = b; b = c;
    fib += to_string(a);
    while(a != 0 || b != 1){
        c = (a+b)%m; a = b; b = c;
        fib += to_string(a);
    }

    for(long long i=0; i<q; i++){
        long long q;
        cin >> q;        
        cout << fib[(q-1)%fib.size()]  << endl;
    }
}