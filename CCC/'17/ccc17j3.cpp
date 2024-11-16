#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, b1, b2, t;
    cin >> a1 >> a2 >> b1 >> b2 >> t;
    int diff = abs(a1-b1)+abs(a2-b2);
    (t-diff<0)||((t-diff)%2==1)?cout<<"N":cout<<"Y";
    return 0;
}