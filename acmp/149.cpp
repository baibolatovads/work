#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n;
	cin >> n;
	int a[n];
	vector <int> v;

		for (int i = 0;i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}

	reverse(v.begin(), v.end());

		for (int i = 0;i < v.size(); i++){
			cout << v[i] << " ";
		}
		
return 0;
}