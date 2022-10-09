#include <bits/stdc++.h>
using namespace std;
char maps[5005][5005];
int dis[5005][5005];
bool vis[5005][5005];
int main(){
    queue<pair<int, int>> q;
    int n, m, endi, endj;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> maps[i][j];
            if(maps[i][j] == 's'){
                vis[i][j] = true;
                q.push({i, j});
            }
            if(maps[i][j] == 'e'){
                endi = i, endj = j;
            }
        }
    }
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        if(cur.first-1 >= 0 && !vis[cur.first-1][cur.second] && maps[cur.first][cur.second]!='X'){
            q.push({cur.first-1, cur.second});
            vis[cur.first-1][cur.second] = true;
            dis[cur.first-1][cur.second] = dis[cur.first][cur.second]+1;
        }
        if(cur.first+1 < n && !vis[cur.first+1][cur.second] && maps[cur.first][cur.second]!='X'){
            q.push({cur.first+1, cur.second});
            vis[cur.first+1][cur.second] = true;
            dis[cur.first+1][cur.second] = dis[cur.first][cur.second]+1;
        }
        if(cur.second-1 >= 0 && !vis[cur.first][cur.second-1] && maps[cur.first][cur.second]!='X'){
            q.push({cur.first, cur.second-1});
            vis[cur.first][cur.second-1] = true;
            dis[cur.first][cur.second-1] = dis[cur.first][cur.second]+1;
        }
        if(cur.second+1 < m && !vis[cur.first][cur.second+1] && maps[cur.first][cur.second]!='X'){
            q.push({cur.first, cur.second+1});
            vis[cur.first][cur.second+1] = true;
            dis[cur.first][cur.second+1] = dis[cur.first][cur.second]+1;
        }
    }
    cout << (dis[endi][endj] == 0? -1: dis[endi][endj]-1);
}