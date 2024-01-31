#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    while(true){
        k++;
        string s = to_string(k);
        set<char> charset;
        for(int i=0; i<s.size(); i++){
            charset.insert(s[i]);
        }
        if(charset.size() == s.size()){
            cout << s << endl;
            return 0;
        }
    }
}