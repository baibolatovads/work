#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, x, k = 0, l = 0;
	cin >> n;

		for (int i = 0; i < n; i++){
			cin >> x;
			if (x == 0) k++;
			if (x == 1) l++;
		}
		if (k > l) cout << l;
		else if (l > k) cout << k;
		else cout << k; 
return 0;
}

