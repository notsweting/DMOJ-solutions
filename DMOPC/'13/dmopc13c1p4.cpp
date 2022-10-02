#include <bits/stdc++.h>
using namespace std;

int main(){
    int z;
    cin >> z;
    for(int y=0; y<z; y++){
        char maps[55][55]={};
        int dis[55][55]={};
        bool vis[55][55]={};
        queue<pair<int, int>> q;
        int n, m, endi, endj;
        cin >> n >> m;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> maps[i][j];
                if(maps[i][j] == 'C'){
                    vis[i][j] = true;
                    q.push({i, j});
                }
                if(maps[i][j] == 'W'){
                    endi = i, endj = j;
                }
            }
        }
        while(!q.empty()){
            auto cur = q.front(); q.pop();
            if(cur.first-1 >= 0 && !vis[cur.first-1][cur.second] && maps[cur.first-1][cur.second]!='X'){
                q.push({cur.first-1, cur.second});
                vis[cur.first-1][cur.second] = true;
                dis[cur.first-1][cur.second] = dis[cur.first][cur.second]+1;
            }
            if(cur.first+1 < m && !vis[cur.first+1][cur.second] && maps[cur.first+1][cur.second]!='X'){
                q.push({cur.first+1, cur.second});
                vis[cur.first+1][cur.second] = true;
                dis[cur.first+1][cur.second] = dis[cur.first][cur.second]+1;
            }
            if(cur.second-1 >= 0 && !vis[cur.first][cur.second-1] && maps[cur.first][cur.second-1]!='X'){
                q.push({cur.first, cur.second-1});
                vis[cur.first][cur.second-1] = true;
                dis[cur.first][cur.second-1] = dis[cur.first][cur.second]+1;
            }
            if(cur.second+1 < n && !vis[cur.first][cur.second+1] && maps[cur.first][cur.second+1]!='X'){
                q.push({cur.first, cur.second+1});
                vis[cur.first][cur.second+1] = true;
                dis[cur.first][cur.second+1] = dis[cur.first][cur.second]+1;
            }
        }
        dis[endi][endj] == 0||dis[endi][endj] >= 60 ? cout << "#notworth" : cout << dis[endi][endj];
        cout << endl;
    }
}