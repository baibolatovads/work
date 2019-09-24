#include <bits/stdc++.h>
using namespace std;

bool f (int x){
	int t = 1;
	while (t < x){
		t = t * 2;
	}return x != t;
}

int main(){

	freopen ("input.txt", "r", stdin);
	int n;
	set <int> x;

	while (cin >> n){
		x.insert(n);
	}

set <int> :: iterator it;

	for (it = x.begin(); it != x.end(); it++){
		if (f(*it)) {
			cout << *it << " ";
		}
	}

return 0;
}