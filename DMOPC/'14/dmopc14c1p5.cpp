#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int dis[1005][1005];
int directions[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int main(){
    int r, c;
    cin >> r >> c;
    int s1, s2, o1, o2;
    cin >> s1 >> s2;
    cin >> o1 >> o2;
    pair<int, int> start = {s1, s2}, office = {o1, o2};
    vector<pair<int, int>> teleports;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> grid[i][j];
        }
    }
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b;
        cin >> a >> b;
        grid[a][b] = 'T';
        teleports.push_back({a, b});

    }

    queue <pair<int, int>> q;
    q.push(start);
    vis[s1][s2] = 1;

    while(!q.empty()){
        auto cur = q.front(); q.pop();
        int curx = cur.first, cury=cur.second;

        for(int i=0; i<4; i++){
            int nx = curx+directions[i][0], ny = cury+directions[i][1];
            if(nx>=0 && nx<r && ny>=0 && ny<c && !vis[nx][ny] && (grid[nx][ny] != 'X')){
                q.push({nx, ny});
                dis[nx][ny] = dis[curx][cury]+1;
                vis[nx][ny] = 1;
            }
        }

    }

    int minimum = 100000000;
    for(auto cur:teleports){
        minimum = min(dis[cur.first][cur.second], minimum);
    }

    cout << dis[o1][o2] - minimum;
}