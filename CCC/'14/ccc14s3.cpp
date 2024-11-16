#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a=0; a<t; a++){
        int n;
        cin >> n;
        stack <int> top, branch;
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            top.push(k);
        }
        int w = top.size();
        bool valid = true;
        for(int i=1; i<=w && valid; i++){
            if(!branch.empty()){
                if(branch.top() == i){
                    branch.pop();
                    continue;
                }
            }
            while(!top.empty() && top.top() != i){
                int k = top.top();
                top.pop();
                branch.push(k);
            }
            if(top.empty()){
                valid = false;
            }
            else if(top.top() == i){
                top.pop();
            }
                
            
        }
        cout << (valid?"Y":"N") << endl;
    }
}