#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    int dis[10][10]={};
    bool vis[10][10]={};
    int dir[8][2] = {{1, 2}, {2, 1}, {-1, 2}, {-2, 1}, {-1, -2}, {-2, -1}, {1, -2}, {2, -1}};
    vector<pair<int, int>> adj[10][10];
    cin >> x1 >> y1 >> x2 >> y2;

    queue<pair<int, int>> q;
    q.push({x1, y1});
    vis[x1][y1] = 1;
    while(!q.empty()){
        int x = q.front().first, y=q.front().second; q.pop();
        for(int k=0; k<8; k++){
            int nx = x+dir[k][0], ny = y+dir[k][1];
            if(nx >= 1 && nx <=8 && ny >= 1 && ny <= 8 && vis[nx][ny]==false){
                vis[nx][ny] = true;
                dis[nx][ny] = dis[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    cout << dis[x2][y2];
}