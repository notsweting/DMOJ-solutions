#include <bits/stdc++.h>
using namespace std;

int w, t, car, bridge, cnt;
queue<int> cars, bridges;
int main(){
    cin >> w >> t;
    for(int i=0; i<t; i++){
        int k;
        cin >> k;
        cars.push(k);
    }
    while(!cars.empty()){
        int k = cars.front();
        if(bridges.size() == 4){
            bridge = bridge+k - bridges.front();
            bridges.pop();
        }
        else{
            bridge += k;
        }

        if(bridge > w){
            cout << cnt << endl;
            return 0;
        }
        cars.pop();
        cnt++;
        bridges.push(k);
        
    }

    cout << cnt;

}
