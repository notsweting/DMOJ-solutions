#include <bits/stdc++.h>
using namespace std;

bool prime(int m){
    if(m==1)
        return false;
    if(m==2)
        return true;
    if(m%2==0)
        return false;
    for(int i=3; i<sqrt(m)+1; i+=2){
        if(m%i==0)
            return false;
    }
    return true;
}
int queries[100005][5];
int main(){
    int n, maxb=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> queries[i][0] >> queries[i][1];
        maxb = max(maxb, queries[i][1]);
    }
    int primes[100005]={};
    for(int i=2; i<=maxb; i++){
        if(prime(i)){
            primes[i]=primes[i-1]+i;
        }
        else
            primes[i]=primes[i-1];
    }
    for(int i=0; i<n; i++){
        cout << primes[queries[i][1]] - primes[queries[i][0]-1]<<endl;
    }
}