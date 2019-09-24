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

		for (int i = 1; i < n; i++){
			if (f(i)) cout << i << " ";
		}

return 0;
}