#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int ans = 0;
    int a, b, c, d;
    cin >> a >> c >> b >> d;

    if(a == 1){
        ans+=461;
    }
    if(a == 2){
        ans+=431;
    }
    if(a == 3){
        ans += 420;
    }
    if(b == 1){
        ans += 130;
    }
    if(b == 2){
        ans += 160;
    }
    if(b == 3){
        ans += 118;
    }
    if(c == 1){
        ans += 100;
    }
    if(c == 2){
        ans += 57;
    }
    if(c == 3){
        ans += 70;
    }
    if(d == 1){
        ans += 167;
    }
    if(d == 2){
        ans += 266;
    }
    if(d == 3){
        ans += 75;
    }

    cout << "Your total Calorie count is " << ans << ".";
}