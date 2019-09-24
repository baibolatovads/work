#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x, k, z;
	int s = 0;
	cin >> n;
	n>=2;

	for (int i =0 ; i<n; i++){
		cin >> x;
	}

	for (int i = 2; i<n; i++){
		k = max (s, x);
		k = x;
		z = min (k, x); break;
}	cout << z ;

return 0;
}