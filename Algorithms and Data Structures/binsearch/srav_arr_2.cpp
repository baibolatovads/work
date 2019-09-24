#include <bits/stdc++.h>
using namespace std;

int a[100100];

int binsearch(int l, int r, int x){
	int mid = (l + r)/2;
	if(l > r) return r;
	if(x < a[mid]) return binsearch(l, mid - 1, x);
	else if (x > a[mid]) return binsearch(mid + 1, r, x);
	else return mid;
}


int main(){

int n, k, i, ans, x;
cin >> n >> k;
int a[n];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

int l = 0;
int r = n - 1;

while(k--){
	cin >> x;
	i = binsearch(l, r, x);
	ans = a[i];
	if (i < 0) ans = a[i + 1];
	else if (abs(x - a[i + 1]) < abs(x - a[i])) ans = a[i + 1];
	cout << ans << "\n"; 
}



return 0;
}