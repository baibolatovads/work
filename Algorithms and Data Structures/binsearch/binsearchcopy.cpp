#include <bits/stdc++.h>
using namespace std;
int a[100100];

int binsearch(int l, int r, int x){
	int mid = (l + r)/2;
	if(l > r) return r;
	if (x  < a[mid]) return binsearch(l, mid - 1, x);
	else if (x > a[mid]) return binsearch(mid + 1, r, x);
	else return mid;
}

int main(){

	int n,k,x,l,r,i,ans;
	cin >> n >> k;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		l = 0;
		r = n - 1;

		while(k--){
			cin >> x;
			i = binsearch(l, r, x);
			ans = a[i];
			if (i < 0) ans = a[i + 1];
			if (abs(x - a[i + 1]) < abs(x - a[i])) ans = a[i + 1];
			cout << ans << endl;
		}


	return 0;
}