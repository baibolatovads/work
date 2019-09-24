#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n];

			for(int i = 0; i < n; i++){
				cin >> a[i];
			}

	int imax = 1, idx = 0;

			for (int i = 1; i <= n; i++){
				if (a[i] > a[imax]) {
					imax = i;
					a[imax] = a[i];
			}
			}cout << imax;

return 0;
}