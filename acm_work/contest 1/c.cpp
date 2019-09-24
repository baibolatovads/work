#include <bits/stdc++.h>
using namespace std;

int a[100100];

int rbinsearch(int l, int r, int x){
	int mid = (l + r)/2;
	if (l > r) return r;
	if (a[mid] <= x) return rbinsearch(mid + 1, r, x);
	else return rbinsearch(l, mid - 1, x);
}

int main(){

freopen("right.in", "r", stdin);
freopen("right.out", "w", stdout);

int n, k, i, x;
cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

int l = 0;
int r = n - 1;

	for(int i = 0; i < k; i++){
		cin >> x;
		i = rbinsearch(l, r, x);
		if (a[i] == x) cout << i + 1 << endl;
		else cout << 0 << endl;
	}

	return 0;
}