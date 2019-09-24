#include <bits/stdc++.h>
using namespace std;

bool f (int a){
	bool res = true;
	if (a == 1) res = false;
	for (int i = 2; i <= sqrt(a); i++){
		if (a % i == 0){
			res = false;
			break;
		}
	}return res;
}

int main(){

	int n;
	cin >> n;
	int a[n];
	vector <int> v;
	int k = 0;

		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (f(a[i]))
			v.push_back(a[i]);
		}

		cout << v.size();

	return 0;
}