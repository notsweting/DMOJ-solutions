#include <bits/stdc++.h>
using namespace std;

bool prime(int m){
    if(m==1)
        return false;
    if(m==2)
        return true;
    for(int i=2; i<sqrt(m)+1; i+=1){
        if(m%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    vector<int> even, odd;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    if(n==2 || n==3 || n==4){
        cout << -1 << endl;
        return 0;
    }
    for(int i=1; i<n+1; i++){
        if(i==5||i==4)
            continue;
        if(i%2==0){
            even.push_back(i);
        }
        else
            odd.push_back(i);
    }

    for(auto k:even){
        cout << k << " ";
    }
    cout << 4 << " " << 5 << " ";
    for(int i=0; i<odd.size()-1; i++){
        cout << odd[i] << " ";
    }
    cout << odd[odd.size()-1]<<endl; 
    return 0;
    
}