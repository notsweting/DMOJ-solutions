#include <bits/stdc++.h>
using namespace std;

vector<string> roads;
int adj[30][30];
int cnt = 0;

bool bfs(int start, int end){
    vector<bool> vis(26, false);
    queue<int> q;
    q.push(start);
    vis[start] = true;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int i=0; i<26; i++){
            if(adj[cur][i] && !vis[i]){
                q.push(i);
                vis[i] = true;
            }
        }
    }
    if(vis[end])
        return true;
    return false;
}
int main(){
    string s;

    while(true){
        cin >> s;
        if(s == "**")
            break;
        int a = s[0]-'A';
        int b = s[1]-'A';
        
        adj[a][b] = 1;
        adj[b][a] = 1;

        roads.push_back(s);
    }

    for(string k: roads){
        int a = k[0]-'A';
        int b = k[1]-'A';
        
        adj[a][b] = 0;
        adj[b][a] = 0;

        if(!bfs(1, 0)){
            cnt++; 
            cout << k << endl;
        }

        adj[a][b] = 1;
        adj[b][a] = 1;

    }

    cout << "There are " << cnt << " disconnecting roads." << endl;
}
