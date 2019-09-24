#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, mx = -1, k = 0;
	cin >> n;
	int a[n], b[n], o[n];
	

		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}

		for(int i = 1; i <= n; i++){
			cin >> b[i];
		}

		for(int i = 1; i <= n; i++){
			o[i] = a[i] * b[i];
		}

		for(int i = 1; i <= n; i++){
			if(mx < o[i]){
				mx = o[i];
				k = i;
			}
		}
		cout << k;


	

return 0;
}