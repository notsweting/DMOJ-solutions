#include <bits/stdc++.h>
using namespace std;

vector<int> adj[105];
int dis[3][105], pre[105], dispense[20];
bool vis[3][105];

int main(){
    
    int n, m, w;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> w;
    for(int i=0; i<w; i++){
        cin >> dispense[i];
    }

    queue<int> q;

    for(int i=0; i<w; i++){
        q.push(dispense[i]);
        vis[1][dispense[i]] = 1;
    }

    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(auto k:adj[cur]){
            if(!vis[1][k]){
                vis[1][k] = true;
                dis[1][k] = dis[1][cur]+4;
                q.push(k);

            }
        }   
    }


    q.push(1);
    vis[0][1] = true;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(auto k:adj[cur]){
            if(!vis[0][k] && dis[0][cur]+1 <= dis[1][k]){
                vis[0][k] = true;
                dis[0][k] = dis[0][cur]+1;
                pre[k] = cur;
                q.push(k);

            }
        }   
    }

    vis[0][n] ? cout << dis[0][n] : cout << "sacrifice bobhob314";

}