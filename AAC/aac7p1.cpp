#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    for(int i=0; i<n; i++){
        int w, h;
        cin >> w >> h;
        if(h==1 && w<7)
            cout << "bad" << "\n";
        else if (w==1)
            cout << "bad" << "\n";
        else if (w<4 && h<4)
            cout << "bad" << "\n";
        else
            cout << "good"<< "\n";
    }
}