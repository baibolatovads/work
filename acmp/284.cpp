#include <bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin >> n;
	int a[n];

		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}

	int k;
	cin >> k;
	int m, l;

		for(int i = 0; i < k; i++){
			cin >> m >> l;
			for(int j = m; j <= l; j++){
				cout << a[j] << " ";
			}
			
		}cout << endl;

	return 0;
}