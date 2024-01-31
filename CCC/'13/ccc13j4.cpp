#include <bits/stdc++.h>
using namespace std;

vector<int> tasks;

bool cmp(int a, int b){
    return a < b;
}
int main(){
    int t, c, count=0;
    cin >> t >> c;
    for(int i=0; i<c; i++){
        int k;
        cin >> k;
        tasks.push_back(k);
    }
    sort(tasks.begin(), tasks.end(), cmp);
    for(int j:tasks){
        t-=j;
        if(t>=0)
            count++;
        else
            break;
    }
    cout << count << endl;
}
