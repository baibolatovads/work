#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n;
	cin >> n;
	int a[n];
	int index, k = 0;

		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] > 437) {
				k++;
		}
	}

		if (k == n) cout << "No crash";
		else {
			for (int i = 0; i < n; i++){
				if (a[i] <= 437){
					index = i;
					break;
				}
			}cout << "Crash " << index + 1;
		}

return 0;
}