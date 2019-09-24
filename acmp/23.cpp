#include <bits/stdc++.h>
using namespace std;

vector<int> v;

	void deliteli(int n){
		for(int i = 1; i <= n; i++){
			if(n%i == 0) v.push_back(i);
		}
	}

int main(){

	int n;
	cin >> n;
	deliteli(n);
	int sum = 0;

	for(int i = 0; i < v.size(); i++){
		sum += v[i];
	}

	cout << sum;

return 0;
}

