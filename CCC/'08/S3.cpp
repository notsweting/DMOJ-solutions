#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        char grid[25][25] = {};
        bool vis[25][25] = {};
        int dis[25][25] = {};
        int row, col;
        cin >> row >> col;
        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                cin >> grid[r][c];
            }
        }

        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = 1;
        while(!q.empty()){
            auto cur = q.front(); q.pop();
            int r = cur.first, c = cur.second;
            if(grid[r][c] == '|' || grid[r][c] == '+'){
                if(r+1 < row && grid[r+1][c] != '*' && !vis[r+1][c]){
                    q.push({r+1, c});
                    vis[r+1][c] = 1;
                    dis[r+1][c] = dis[r][c]+1;
                }
                if(r-1 >= 0 && grid[r-1][c] != '*' && !vis[r-1][c]){
                    q.push({r-1, c});
                    vis[r-1][c] = 1;
                    dis[r-1][c] = dis[r][c]+1;
                }
            }
            if(grid[r][c] == '-' || grid[r][c] == '+'){
                if(c+1 < col && grid[r][c+1] != '*' && !vis[r][c+1]){
                    q.push({r, c+1});
                    vis[r][c+1] = 1;
                    dis[r][c+1] = dis[r][c]+1;
                }
                if(c-1 >= 0 && grid[r][c-1] != '*' && !vis[r][c-1]){
                    q.push({r, c-1});
                    vis[r][c-1] = 1;
                    dis[r][c-1] = dis[r][c]+1;
                }
            }
        }

        vis[row-1][col-1]? cout << dis[row-1][col-1]+1 : cout << -1;
        cout << endl;
    }
}