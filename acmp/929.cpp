#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	vector<int> v;

	if(n % 1 == 0) v.push_back(n * 6);
	if(n % 6 == 0) v.push_back(n/6);
	if(n % 2 == 0) v.push_back(n/2 * 5);
	if(n % 5 == 0) v.push_back(n/5 * 2);
	if(n % 3 == 0) v.push_back(n/3 * 4);
	if(n % 4 == 0) v.push_back(n/4 * 3);

sort(v.begin(), v.end());

int d = v.size();

cout << v[0] << " " << v[d - 1];

return 0;
}