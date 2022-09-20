#include <bits/stdc++.h>
using namespace std;

double width[10005], lefth[10005], righth[10005];
int main(){
    int n;
    double area=0;
    cin >> n;
    cin >> lefth[0];
    for(int i=1; i<=n; i++){
        cin >> lefth[i];
        righth[i-1] = lefth[i];
    }
    for(int i=0; i<n; i++){
        cin >> width[i];
    }

    for(int i=0; i<n; i++){
        area+=((lefth[i]+righth[i])/2)*width[i];
    }
    printf("%4.2f", area);
}