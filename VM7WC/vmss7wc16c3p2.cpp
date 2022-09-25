#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> houses[2005];
    int distance[2005];
    bool visited[2005];
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    for(int i=0; i<m; i++){
        int j, k;
        cin >> j >> k;
        houses[j].push_back(k);
        houses[k].push_back(j);
    }
    queue<int> q;
    q.push(a);
    visited[a] = true;
    distance[a] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i:houses[cur])
            if(visited[i]==false){
                q.push(i);
                visited[i] = true;
                distance[i] = distance[cur]+1;
            }
    }
    cout << (visited[b]?"GO SHAHIR!\n" : "NO SHAHIR!\n");
}