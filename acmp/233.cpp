#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n];
	int index, t = 0;

			for (int i = 0; i < n; i++){
				cin >> a[i];
			}

			for (int i = 0; i < n; i++){
				if(a[i] > 437) t++;
			}

			if (t = n) {
				cout << "No crash";
			}
			if (t < n){
				for (int i = 0; i < n; i++){
					if (a[i] <= 437){
						i = index;
						break;
					}
				}
			}cout << "Crash " << index;

return 0;
}