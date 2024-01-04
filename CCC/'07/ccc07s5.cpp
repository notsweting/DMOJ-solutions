#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MM = 3e4+2;

int t, n, k, w, psa[MM], dp[502][MM];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    for(cin >> t; t--;){
        cin >> n >> k >> w;
        for(int i=1; i<=n; i++){
            cin >> psa[i];
            psa[i] += psa[i-1];
        }
        memset(dp, 0, sizeof(dp));

        for(int i=1; i<=k; i++){
            for(int j=1; j<=n; j++){
                if(j <= w) dp[i][j] = psa[j];
                else dp[i][j] = max(dp[i][j-1], psa[j] - psa[j-w] + dp[i-1][j-w]);
            }
        
        
        }
        cout << dp[k][n] << endl;
    }
    
}