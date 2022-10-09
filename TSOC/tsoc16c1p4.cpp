#include <bits/stdc++.h>
using namespace std;

bool vis[40][55];
int room = 0;
int row, col;
char grid[40][55];

void bfs(pair<int, int> cur){
    bool monkey = false;
    queue<pair<int, int>> q;
    q.push({cur.first, cur.second});
    while(!q.empty()){
        cur = q.front(); q.pop();
        int r = cur.first, c = cur.second;
        if(grid[r][c] == 'M'){
            monkey = true;
        }

        if(r+1 < row && grid[r+1][c] != '#' && !vis[r+1][c]){
            q.push({r+1, c});
            vis[r+1][c] = 1;
        }
        if(r-1 >= 0 && grid[r-1][c] != '#' && !vis[r-1][c]){
            q.push({r-1, c});
            vis[r-1][c] = 1;
        }
        if(c+1 < col && grid[r][c+1] != '#' && !vis[r][c+1]){
            q.push({r, c+1});
            vis[r][c+1] = 1;
        }
        if(c-1 >= 0 && grid[r][c-1] != '#' && !vis[r][c-1]){
            q.push({r, c-1});
            vis[r][c-1] = 1;
        }
    }

    if(monkey)
        room++;
}
int main(){
    cin >> row >> col;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> grid[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(!vis[i][j] && (grid[i][j] == '.' || grid[i][j] == 'M')){
                bfs({i,j});
            }
        }
    }
    
    cout << room;

}