#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3; i<sqrt(n)+1; i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        for(int a=1; a<k; a++){
            int k2 = k*2;
            int b=k2-a;
            if(prime(a) && prime(b) && (a+b)/2 == k){
                cout << a << " " << b << endl;
                break;
            }
        }
    }
}