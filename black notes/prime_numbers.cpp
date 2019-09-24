#include <bits/stdc++.h>
using namespace std;


int main(){

	int n, d = 0;
	cin >> n;
	int a[n];

		for (int i = 0; i < n; i++){
			cin >> a[i];
		}

		for (int i = 0; i < n; i++){
			for (int j = 2; j <= n; j++){
				if (a[i] % j == 0) d++;
				if (d > 2) {
					cout << a[i] << " ";
			}
		}
}
return 0;
}