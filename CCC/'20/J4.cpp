#include<bits/stdc++.h>
using namespace std;

int main() {
    string t, s, y;
    cin >> t >> s;

    if (t.size()<s.size()){
        cout << "no";
        return 0;
    }
    else{
        int j = t.size();
        int k = s.size();
        y = s + s;
        int l = y.size();
        for(int i=0; i<=(j-k); i++){
            string search = t.substr(i, k);
            if (y.find(search) != string::npos){
                cout << "yes";
                return 0;
            }
            
        }
    }
    cout << "no";
    return 0;
}