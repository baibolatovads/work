#include <bits/stdc++.h>
using namespace std; 
int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	int s = a[0][0];
	int k = 0;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

	for (int i=0; i < n; i++){
		for (int j=0; j < m; j++){
			if (a[i][j]<0) continue;
			s = s + a[i][j];
			if (k < s)
				k = s;
		}if (k=s) cout << i << endl;
		else if (k)
	} 

	return 0;
}
