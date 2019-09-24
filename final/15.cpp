#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	int n, m;
	cin >> n >> m;
	int a[n][m];
	bool ok = true;

		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}

		for (int i = 1; i <= n - 1; i++){
			for (int j = 1; j <= m - 1; j++){
				if ((a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1]) % 4 == 0)
					ok = false;
			}
		}

		if (ok) cout << "YES";
		else cout << "NO";

	return 0;
}