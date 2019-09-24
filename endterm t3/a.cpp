#include <bits/stdc++.h>
using namespace std;

bool f(int x){
	bool res = false;
	if (x == 1) res = true;

	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0) res = true;
	}return res;
}

int main(){

	freopen ("input.txt", "r", stdin);
	map <int, int> m;
	int n;
	map <int, int> :: iterator it;

	while (cin >> n){
		m[n]++;
	}

	for (it = m.begin(); it != m.end(); it++){
		int k = (*it).first;
		int l = (*it).second;
		if (f(k) && l > 1){
			cout << k << " ";
		}
	}
return 0;
}