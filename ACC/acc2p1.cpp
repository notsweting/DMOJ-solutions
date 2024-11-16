#include <bits/stdc++.h>
using namespace std;

const int MM = 105;
const long long INF = 0x3f3f3f3f3f3f3f3f;

int n, q;
long long dist[MM][MM][MM];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    memset(dist, INF, sizeof(dist));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> dist[i][j][1];
            if(i == j) dist[i][j][1] = 0;
            else if(dist[i][j][1] == 0) dist[i][j][1] = INF;        
        }
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                dist[i][j][1] = min(dist[i][j][1], dist[i][k][1] + dist[k][j][1]);
            }
        }
    }

    for(int d=2; d<=n; d++){
        for(int k=1; k<=n; k++){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    dist[i][j][d] = min(dist[i][j][d], max(dist[i][k][d-1], dist[k][j][1]));           
                }
            }
        }
    }

    cin >> q;

    for(int i=0; i<q; i++){
        int s, t, d;
        cin >> s >> t >> d;
        if(dist[s][t][d] == INF)
            cout << 0 << endl;
        else cout << dist[s][t][d] << endl;
    }
    
}