#include <bits/stdc++.h>
using namespace std;

int main(){

int x, n, k = 0;
cin >> x >> n;

int a[n];

		for (int i = 0; i < n; i++){
			cin >> a[i];
		}

		for (int i = 0; i < n; i++){
			if (a[i] == x) k = 1;
		}if (k == 1) cout << "YES";
		else cout << "NO";

return 0;
}
