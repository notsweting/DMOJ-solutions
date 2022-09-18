#include<bits/stdc++.h>
using namespace std;

int main() {
    while(1){
        int n, last;
        cin >> n;
        if (n==99999)
            return 0;
        if ((n/1000)%10+n/10000==0)
            cout << (last==1?"right":"left") << " " << n%1000 << endl;
        else if (((n/1000)%10+n/10000)%2==0){
            cout << "right " << n%1000 << endl;
            last = 1;
        }
        else{
            cout << "left " << n%1000 << endl;
            last = 0;
        }
    }
    return 0;
}