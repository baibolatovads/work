#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main (){

	freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a;
	vector<int> v;

	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}

	rotate(v.begin(), v.begin() + m, v.end());
	//reverse(v.begin(), v.end());

	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << " ";
	}

return 0;
}