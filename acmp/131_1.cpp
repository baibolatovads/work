#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n;
	cin >> n;
	int a[n], b[n];
	int index, k = 0;

		for (int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
			if (b[i] == 0){
				k++;
			}
		}

int max = -1;

		if (k == n) cout << -1;
		else {
			for (int i = 0; i < n; i++){
				if (b[i] != 0){
				if (max < a[i]){
					max = a[i];
					index = i;
				}
			}
		}cout << index + 1;
	}

return 0;
}

	