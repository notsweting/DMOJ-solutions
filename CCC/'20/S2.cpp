#include <bits/stdc++.h>
using namespace std;

int grid[1505][1505];
bool vis[4000][4000];
int n, m;
 
vector <int> factors[1000500];
void find_factors(int num){
    for(int i=1; i<sqrt(num)+1; i++){
        if(num%i==0 && i <= max(m, n) && num / i <= max(m, n)){
            factors[num].push_back(i);
        }
    }
}

int main(){
    cin >> m >> n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin >> grid[i][j];
        }
    }
    queue <pair<int, int>> q;
    q.push({1,1});
    while(!q.empty()){
        auto coord = q.front(); q.pop();
        int cur = grid[coord.first][coord.second];
        if(factors[cur].empty()){
            find_factors(cur);
        }
        for(auto k : factors[cur]){
            if(k > m && k > n){
                continue;
            }
            if(k <= m && !vis[k][cur/k]){
                vis[k][cur/k] = 1;
                q.push({k, cur/k});
            }
            if(k <= n && !vis[cur/k][k]){
                vis[cur/k][k] = 1;
                q.push({cur/k, k});
            }
        }
    }
    cout << (vis[n][m]? "yes":"no");
}