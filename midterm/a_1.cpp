#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;
bool ok = true;

	if (n == 1) {
		cout << "NO";
		return 0;
	}

	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) {
			ok = false;
		} 	else ok = true;
	}

	if (ok) cout  << "YES";
	else cout << "NO";

return 0;
}