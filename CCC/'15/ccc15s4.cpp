#include <bits/stdc++.h>
using namespace std;

const int MM = 2005;

typedef pair<int, int> pi;
typedef long long ll;
typedef array<int, 3> E;

int k, n, m, dis[MM][202], st, ed; vector<E> adj[MM];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> n >> m;
    for(int i=0; i<m; i++){
        int u, v, t, h;
        cin >> u >> v >> t >> h;
        adj[u].push_back({v, t, h});
        adj[v].push_back({u, t, h});

    }
    cin >> st >> ed;
    memset(dis, 0x3f, sizeof(dis));
    priority_queue<E, vector<E>, greater<E>> q;
    dis[st][0] = 0;
    q.push({0, st, 0});
    while(!q.empty()){
        auto[d, u, h] = q.top(); q.pop();
        if(d > dis[u][h]) continue;
        if(u == ed){ cout << d << endl; return 0;}
        for(auto[v, t, hull] : adj[u]){
            int nh = hull + h;
            if(nh < k && dis[v][nh] > dis[u][h] + t){
                dis[v][nh] = dis[u][h] + t;
                q.push({dis[v][nh], v, nh});
            }
        }

    }

    cout << -1 << endl;
}