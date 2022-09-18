#include <bits/stdc++.h>
using namespace std;

int main(){
    
    for(int z=0; z<10; z++){
        int events[1005] = {};
        int n, m, d;
        cin >> n >> m >> d;
        for(int i=0; i<m; i++){
            int day;
            cin >> day;
            events[day-1]++;
        }
        int shirts = n, clean = n, laundry = 0;
        for(int i=0; i<d; i++){
            if(clean == 0){
                laundry++;
                clean = shirts;
            }
            clean+=events[i];
            shirts+=events[i];
            clean--;
        }        
        cout << laundry << "\n";
    }

}