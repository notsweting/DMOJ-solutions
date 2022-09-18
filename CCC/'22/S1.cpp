#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cin >> n;
    for(int i=0; i<=n; i+=5){
        if((n-i)%4==0){
            count++;
        }
    }
    cout << count;
}