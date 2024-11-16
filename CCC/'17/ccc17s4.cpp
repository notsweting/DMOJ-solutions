#include <bits/stdc++.h>
using namespace std;

typedef array<int, 4> E;
const int MM = 1e5+5;
int n, m, d, ans, parent[MM], last, lastw; vector<E> edge;

int find_set(int d){
    if(d != parent[d]) parent[d]=find_set(parent[d]);
    return parent[d];
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> d;

    for(int i=0; i<=n; i++) parent[i] = i;

    for(int i=0; i<m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        edge.push_back({w, i>=n-1, u, v});
    }

    sort(edge.begin(), edge.end());
    for(int i=0; i<edge.size(); i++){
        auto[w, t, u, v] = edge[i];
        int fu = find_set(u), fv = find_set(v);
        if(fu != fv) {
            parent[fu]=fv;
            ans+=t;
            last = i;
            lastw = w;
        }
    }

    if(edge[last][1] && lastw <=d){
        for(int i=0; i<=n; i++) parent[i] = i;
        for(int i=0; i<last; i++){
            auto[w, t, u, v] = edge[i];
            if(t==0 || w < lastw){
                parent[find_set(u)] = find_set(v);
            }
        }
        for(int i=last+1; i<edge.size(); i++){
            auto[w, t, u, v] = edge[i];
            if(t==0 && w <= d){
                if(find_set(u) != find_set(v)){
                    ans--;
                    break;
                }
            }
        }
    }
    cout << ans;
}