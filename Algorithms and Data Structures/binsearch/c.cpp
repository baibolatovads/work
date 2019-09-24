#include <bits/stdc++.h>
using namespace std;

int a[100100];

bool binsearch(int *a, int n, int x){
	int l = 0;
	int r = n - 1;
	while(l <= r){
		int mid = (l + r)/2;
		if(a[mid] < x){
			l = mid + 1;
		}
		else if (a[mid] > x){
			r = mid - 1;
		}
		else return true;
	}
	return false;
}

int main(){

	int n, k, x;
	cin >> n >> k;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < k; i++){
			cin >> x;
			if (binsearch(a, n, x)) cout << "YES\n";
			else cout << "NO\n";
		}

	return 0;
}