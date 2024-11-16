#include <bits/stdc++.h>
using namespace std;

int d, e, w;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> d >> e >> w;

    float a = max(d-100, 0)*25 + e*15 + w*20;
    float b = max(d-250, 0)*45 + e*35 + w*25;

    a/=100;
    b/=100;

    printf("Plan A costs %.2f\nPlan B costs %.2f\n", a, b);

    if(a == b){
        printf("Plan A and B are the same price.\n");
    }
    else if (a < b){
        printf("Plan A is cheapest.\n");
    }
    else{
        printf("Plan B is cheapest.\n");
    }
}