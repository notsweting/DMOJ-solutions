#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a, b, n;
vector<int> motel = {0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};

int main(){  
    cin >> a >> b >> n;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        motel.push_back(k);
    }

    sort(motel.begin(), motel.end());

    vector<ll> dp(motel.size());
    dp[0] = 1;
    for(int i=1; i<dp.size(); i++){
        for(int j=i-1; j>=0; j--){
            int dist = motel[i] - motel[j];
            if(a <= dist && dist <= b) dp[i] += dp[j];

        }
    }

    cout << dp.back() << endl;

}