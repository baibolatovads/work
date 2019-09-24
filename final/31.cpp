#include <bits/stdc++.h>
using namespace std;
int main(){

	freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	int a[n][n];
	int m = (n*(n*n + 1))/2;

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}

		for (int i = 0; i < n; i++){
			int CurrentRowsum = 0;
		for (int j = 0; j < m; j++){
			CurrentRowsum = 1 + ((i - j + (n - 1)/2)%n)*n + ((i + j + (n + 1)/2)%n);
		}if (CurrentRowsum == m) cout << "YES";
		else cout << "NO";
	}

return 0;
}