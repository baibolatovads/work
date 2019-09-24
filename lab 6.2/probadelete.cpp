#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int a[n];
	int z = a[1];
	int f = a[1];

	for (int i=0; i<n; i++){
		cin >> a[n];
	}

	for (int i = 0; i<n; i++){
		z = max(z, a[n]); 
		f = min (f, a[n]);
		z = a[n];
		f = a[n];

	}