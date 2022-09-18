#include <bits/stdc++.h>
using namespace std;

vector<pair<double, double>> times;
int main(){
	int n;
	double speed=0;
	cin >> n;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		times.push_back(make_pair(a, b));
	}
	sort(times.begin(), times.end());
	for(int i=0; i<times.size()-1; i++){
		double time = abs((times[i].second-times[i+1].second) / (times[i].first-times[i+1].first));
		speed = max(speed, time);
	}
	cout << speed;
}