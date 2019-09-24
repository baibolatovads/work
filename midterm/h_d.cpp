#include <bits/stdc++.h>
using namespace std;
int main(){

int n, k = 0;
cin >> n;
int a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

int m = a[0];

	for (int i = 0; i < n; i++){
		if(m < a[i])
			m = a[i];
	}

	for (int i = 0; i < n; i++){
		if (m == a[i]) k++;
	}cout << k;

return 0;
}


