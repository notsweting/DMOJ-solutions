#include <bits/stdc++.h>
using namespace std;

bool prime(long long m){
    for(long long i=3; i<sqrt(m)+1; i+=2){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    long long n;
    cin >> n;
    if(n==1){
        cout << 2;
        return 0;
    }
    if(n==2){
        cout << 2;
        return 0;
    }
    if(n%2==0)
        n++;
    while(!prime(n))
        n+=2;
    cout << n;
}