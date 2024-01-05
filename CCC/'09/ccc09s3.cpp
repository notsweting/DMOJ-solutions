#include <bits/stdc++.h>
using namespace std;

const int MM = 55;
int dis[MM];
bool vis[MM];
bool adj[MM][MM];

int bfs(int s, int dis[], bool vis[]){
    int ans = 0;
    // reset dis, vis array
    for(int i=0; i<50; i++){
        dis[i] = vis[i] = 0;
    }
    // initialization
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        // go through all nodes, if node has connection to cur,
        // push node to queue and mark distance + visibility
        for(int nxt=0; nxt<=50; nxt++){
            if(adj[cur][nxt] && !vis[nxt]){
                q.push(nxt);
                vis[nxt] = 1;
                dis[nxt] = dis[cur]+1;
                // used for checking friends of friends
                if(dis[nxt] == 2){
                    ans++;
                }
            }
        }
    }
    return ans;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    // initialize adj
    adj[2][6] = 1; adj[6][2] = 1;
    adj[6][1] = 1; adj[1][6] = 1;
    adj[6][3] = 1; adj[3][6] = 1;
    adj[6][4] = 1; adj[4][6] = 1;
    adj[6][5] = 1; adj[5][6] = 1;
    adj[6][7] = 1; adj[7][6] = 1;
    adj[5][3] = 1; adj[3][5] = 1;
    adj[4][3] = 1; adj[3][4] = 1;
    adj[4][5] = 1; adj[5][4] = 1;
    adj[3][15] = 1; adj[15][3] = 1;
    adj[15][13] = 1; adj[13][15] = 1;
    adj[13][14] = 1; adj[14][13] = 1;
    adj[13][12] = 1; adj[12][13] = 1;
    adj[12][11] = 1; adj[11][12] = 1;
    adj[10][11] = 1; adj[11][10] = 1;
    adj[10][9] = 1; adj[9][10] = 1;
    adj[12][9] = 1; adj[9][12] = 1;
    adj[8][9] = 1; adj[9][8] = 1;
    adj[7][8] = 1; adj[8][7] = 1;

    adj[16][18] = 1; adj[18][16] = 1;
    adj[16][17] = 1; adj[17][16] = 1;
    adj[18][17] = 1; adj[17][18] = 1;

    while(true){
        char k;
        cin >> k;
        if(k == 'i'){
            // make u and v friends
            int u, v;
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1;
        }
        else if(k == 'd'){
            // delete friendship between u and v
            int u, v;
            cin >> u >> v;
            adj[u][v] = 0;
            adj[v][u] = 0;
        }
        else if(k == 'n'){
            // output the number of friends u has
            int u, ans=0;
            cin >> u;
            // go through adj array - if index is true 
            // that means node u and v are friends
            for(int i=0; i<=50; i++){
                if(adj[u][i])
                    ans++;
            }
            cout << ans << endl;
        }
        else if(k == 'f'){
            // output friends of friends, built into bfs func
            int u, ans=0;
            cin >> u;
            ans = bfs(u, dis, vis);
            cout << ans << endl;
        }
        else if(k == 's'){
            // check if u and v are connected, using bfs
            int u, v;
            cin >> u >> v;
            bfs(u, dis, vis);
            if(vis[v]){
                cout << dis[v] << endl;
            }
            else
                cout << "Not connected" << endl;
        }
        else if(k == 'q')
            return 0;

    }
}