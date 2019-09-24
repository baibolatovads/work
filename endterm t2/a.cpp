#include <bits/stdc++.h>
using namespace std;

bool f(int x){
	bool res = false;
	int t = 1;
	if (x == 1) res = true;

	for (int i = 2; i < sqrt(x); i++){
		if (x % i == 0) {
			res = true;
			break;
		}
	}
	return res;
}


int main(){

freopen ("input.txt", "r", stdin);
int n;
set <int> x, y;

while (cin >> n){
	x.insert(n);
}

set <int> :: iterator it;

	for (it = x.begin(); it != x.end(); it++){
		if (f(*it)) {
			y.insert(*it);
	}
}


	for (it = y.begin(); it != y.end(); it++){
		cout << *it << " ";
	}

return 0;
}