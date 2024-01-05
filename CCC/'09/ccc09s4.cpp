#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

int n, t, k, dest, dis[5005], cities[5005], cost[5005];
vector<pi> adj[5005];

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);


    cin >> n >> t;
    
    for(int i=0; i<t; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cin >> k;
    for(int i=0; i<k; i++){
        cin >> cities[i] >> cost[i];
    }

    cin >> dest;

    memset(dis, 0x3f, sizeof(dis));
    priority_queue<pi, vector<pi>, greater<pi>> q;
    q.push({0, dest});
    dis[dest] = 0;
    while(!q.empty()){
        auto[d, u] = q.top(); q.pop();
        for(auto[v, w] : adj[u]){
            if(dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                q.push({dis[v], v});
            }
        }
    }

    int ans = 0x3f3f3f;
    for(int i=0; i<k; i++){
        ans = min(dis[cities[i]] + cost[i], ans);
    }

    cout << ans << endl;
    return 0;
}