#include <bits/stdc++.h>
using namespace std;
const int MM = 1e6*2 + 5;
int n, sensor[1005], most, secondmost;

int main(){
    // get n
    cin >> n;

    for(int i=0; i<n; i++){
        int k;
        // get sensor
        cin >> k;
        // increase sensor count
        sensor[k]++;
        // if sensor count is more than second most
        // or
        // if sensor count is equal to secondmost and replacing 
        if((
            (sensor[k] > sensor[secondmost]) 
            ||
            ((sensor[k] == sensor[secondmost]) && (abs(k-most) > abs(secondmost-most))))

            &&

            (k != secondmost && k != most)
            ){
                secondmost = k;
        }

        else if(
            (
                (sensor[k] == sensor[most]) && (abs(k-secondmost) > abs(secondmost-most))
            )

            &&

            (k != secondmost && k != most)
            ){
                most = k;
        }
        if(sensor[secondmost] > sensor[most]){
            int temp;
            temp = secondmost;
            secondmost = most;
            most = temp;
        }
    }
    cout << abs(most - secondmost) << endl;
}