#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n, k;
	int min2;
	cin >> n;
	int a [n];
	int m, s;

		for (int i=0; i<n; i++){
			cin >> a[n];
		}

		for (int i = 0; i<n; i++){
			/*m = min (m, a[i]);
			m = a [i];*/
			m = min(a[1], a[2]);
			k = m;
			min2 = max (a[1], a[2]);
			s = min2;
		}
		for (int i = 3; i<n; i++){
			if (a[i] < k) {
			s = k;
			k = a[i];
		}else if (a[i]<s) s = a[i];
	}cout << k << " " << s;

return 0;
}