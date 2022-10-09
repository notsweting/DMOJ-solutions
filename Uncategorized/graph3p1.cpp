#include <bits/stdc++.h>
using namespace std;

vector<int> adj[30005];
int dis[30005];
int offices[30005];
bool vis[30005];

int main(){
    int n, m, k, mcount=0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<int> q;

    cin >> k;
    for(int i=0; i<k; i++){
        cin >> offices[i];
        q.push(offices[i]);
        vis[offices[i]] = true;
    }

    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(auto k:adj[cur]){
            if(!vis[k]){
                vis[k] = true;
                dis[k] = dis[cur]+1;
                q.push(k);

            }
        }   
    }
    for(int i=1; i<=n; i++){
        mcount = max(dis[i], mcount);
    }
    cout << mcount;
}