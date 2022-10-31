#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0, mi = 100005;
    int dis[10005];
    vector<int> adj[10005];
    cin >> n;
    for(int i=0; i<n; i++){
        int m;
        cin >> m; 
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            adj[i].push_back(x-1);
        }
    }
    queue <int> q;
    q.push(0); dis[0] = 1;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        count++;
        if(adj[cur].empty())
            mi=min(mi, dis[cur]);
        for(int nxt: adj[cur]){
            if(dis[nxt] == 0){
                q.push(nxt);
                dis[nxt] = dis[cur]+1;
            }
        }
    }
    cout << (count == n?"Y\n":"N\n");
    cout << mi;
}