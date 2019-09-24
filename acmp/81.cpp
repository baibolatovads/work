#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	
	int n;
	cin >> n;
	int a[n], min, max;

		for (int i = 0; i < n; i++){
			cin >> a[i];
		}

		min = a[0];
		max = a[0];

		for (int i = 0; i < n; i++){
			if (max < a[i]) max = a[i];
			if (min > a[i]) min = a[i];
		}

		cout << min << " " << max;

return 0;
}