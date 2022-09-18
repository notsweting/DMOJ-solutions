#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double smallest=10000000000;
    vector <double> villages;
    cin >> n;
    for(int i=0; i<n; i++){
        double k;
        cin >> k;
        villages.push_back(k);
    }
    sort(villages.begin(), villages.end());
    for(int i=1; i<villages.size()-1; i++){
        double neighborhood = ((villages[i+1] - villages[i]) / 2) + ((villages[i] - villages[i-1]) / 2);
        smallest = min(neighborhood, smallest);
    }
    cout << fixed << setprecision(1) << smallest;
    return 0;

}