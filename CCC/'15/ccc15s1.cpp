#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    stack<int> st;
    while(n--){
        int k;
        cin >> k;
        if(k == 0){
            st.pop();
        }
        else{
            st.push(k);
        }
    }
    int cnt = 0;
    while(!st.empty()){
        cnt+=st.top();
        st.pop();
    }
    cout << cnt << endl;
    return 0;
}