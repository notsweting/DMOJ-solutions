#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int n, s;
    cin >> n;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        k!=0?st.push(k):st.pop();
    }
    while(!(st.empty())){
        s += st.top();
        st.pop();
    }
    cout << s;
}