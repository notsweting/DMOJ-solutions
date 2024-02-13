#include <bits/stdc++.h>
using namespace std;

typedef array<int, 4> comp;
typedef long long ll;

const int MAXN = 1e4+5;

int n;
vector<comp> computer(MAXN);
string cname[MAXN], kname[MAXN];

bool cmp(comp a, comp b){
    ll comparank = a[1]*2 + a[2]*3 + a[3];
    ll compbrank = b[1]*2 + b[2]*3 + b[3];
    // sort by value of 2r+3s+d, tiebreak using lowered name
    return tie(comparank, kname[b[0]]) > tie(compbrank, kname[a[0]]);
}


int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        // input
        int r, s, d;
        string nname = "";
        cin >> cname[i] >> r >> s >> d;

        for(int j=0; j<cname[i].size(); j++){
            // lower name for lexicographic comparison
            nname += tolower(cname[i][j]);
        }

        // store id of computer so we can access name later
        kname[i] = nname;
        computer.push_back({i, r, s, d});
    }

    // sort
    sort(computer.begin(), computer.end(), cmp);

    cout << cname[computer[0][0]] << endl << (n==1?"":cname[computer[1][0]]) << endl;
}