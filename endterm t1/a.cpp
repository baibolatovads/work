#include <bits/stdc++.h>
using namespace std;

bool f (int x){
	int t = 1;
	while(t < x){
		t = t*2;
	}
	return x == t;
}

int main(){

int n;
set <int> y;

	while(cin >> n){
		if (f(n)) {
			y.insert(n);
	}
}

set <int> :: iterator it;

	for (it = y.begin(); it != y.end(); it++){
		cout << *it << " ";
	}
return 0;
}