#include <bits/stdc++.h>
using namespace std;

bool sortbyboth(const int &a, const int&b){
		if (a%10 == b%10)
            return a > b;
		else
			return a%10 < b%10;
	}

int main() {
	int n;
	cin >> n;
	vector<int> numbers;
	for(int i=0; i<n; i++){
		int k;
		cin >> k;
        if(k<100)
            numbers.push_back(k);
        else
            numbers.push_back(k);
	}
	
	sort(numbers.begin(), numbers.end(), sortbyboth);

	for(int i=0; i<n; i++){
		cout << numbers[i] << " ";
	}

}