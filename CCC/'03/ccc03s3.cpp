#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

int f, r, c, vis[30][30], rooms;
vector<int> areas;
char grid[30][30];

int directions[4][2] = {
    {1, 0},
    {0, 1},
    {-1, 0},
    {0, -1}
};

int bfs(pi s){
    int cnt = 1;
    queue<pi> q;

    q.push(s);
    vis[s.first][s.second] = 1;

    while(!q.empty()){
        auto cur = q.front(); q.pop();
        int curx = cur.first, cury = cur.second;

        for(int i=0; i<4; i++){
            int newx = curx + directions[i][0], newy = cury + directions[i][1];
            if(grid[newx][newy] == '.' && !vis[newx][newy]){
                cnt++;
                vis[newx][newy] = 1;
                q.push({newx, newy});
            }
        }
    }

    return cnt;

}
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    cin >> f >> r >> c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> grid[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(!vis[i][j] && grid[i][j] == '.'){
                int area = bfs({i, j});
                areas.push_back(area);
            }
        }
    }

    sort(areas.begin(), areas.end(), greater());

    int fill = 0;
    for(int nxt : areas){
        f -= nxt;
        if(f >= 0){
            fill++;
        }
        else{
            f+=nxt;
            break;
        }
    }
    
    cout << fill << " room" << (fill==1?", ":"s, ") << f << " square metre(s) left over" << endl;

    return 0;
}