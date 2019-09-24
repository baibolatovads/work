#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, k = 0, max = -10000, min = 10000, d = 0, z = 0, som = 1;
	cin >> n;
	int a[n];

		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] > 0) k += a[i];
		}cout << k << " ";

		for (int i = 0; i < n; i++){
			if (max < a[i]) {
				max = a[i];
				d = i;
			}
			if (min > a[i]){
				min = a[i];
				z = i;
			}
		}
		if (d > z){
			for(int i = z + 1; i < d; ++i){
				som = som * a[i];
			}
		}else{
			for (int i = d + 1; i < z; ++i){
				som = som * a[i];
			}
		}cout << som;

return 0;
}