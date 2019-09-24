#include <bits/stdc++.h>
using namespace std;

int main(){

	int k, n;
	cin >> k >> n;

	if(n <= k) cout << 1 << " " << n;
	else {
		if(n%k == 0) cout << n/k << " " << k;
		else cout << n/k + 1 << " " << n%k;
	}

return 0;
}