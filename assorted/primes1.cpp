#include <bits/stdc++.h>
using namespace std;

bool prime(int m){
    for(int i=2; i<sqrt(m)+1; i+=1){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n, ans=1, k=1;
    cin >> n;
    cout << 2 << endl;
    while(ans<n){
        k+=2;
        if(prime(k)){
            cout<< k<<endl;
            ans++;
        }        
    }

}