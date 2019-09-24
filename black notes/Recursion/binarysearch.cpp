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

	int n, x, k;
	cin >> n;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
int l = 0, r = n - 1;
cin >> x;
		for(int i = 0; i < n; i++){
			int j = binsearch(l, r, x);
			if(x == a[j]) k = 1;
			else k = 0;
		}
		if(k == 1) cout << "YES";
		else cout << "NO";
	return 0;
}