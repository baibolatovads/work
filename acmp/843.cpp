#include <bits/stdc++.h>
using namespace std;
int main(){

	int n, m, f, l;
	cin >> n >> m >> f >> l;
	int onlym = 0, onlyf = 0, both = 0;

	int cnt = n - l;
	int sum = m + f;

	 both = sum - cnt;
	onlym = m - both;
	onlyf = f - both;
	cout << both << " " << onlym << " " << onlyf;

	return 0;
}