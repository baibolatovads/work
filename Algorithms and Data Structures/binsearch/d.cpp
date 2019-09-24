#include <bits/stdc++.h>
using namespace std;

int a[100100];

int lbinsearch(int l, int r, int x){
	int mid = (l + r)/2;
	if (l > r) return l;
	if (a[mid] < x) return lbinsearch(mid + 1, r, x);
	else return lbinsearch(l, mid - 1, x);

}


int rbinsearch(int l, int r, int x){
	int mid = (l + r)/2;
	if (l > r) return r;
	if (a[mid] <= x) return rbinsearch(mid + 1, r, x);
	else return rbinsearch(l, mid - 1, x);

}

int main(){

	int n, k, x, lbs, rbs;
	cin >> n >> k;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

int l = 0;
int r = n - 1;

		while(k--){
			cin >> x;
			lbs = lbinsearch(l, r, x);
			rbs = rbinsearch(l, r, x);
			if (a[lbs] == x && a[rbs] == x) cout << lbs + 1 << " " << rbs + 1 << endl;
			else cout << 0 << endl;
		}


	return 0;
}

