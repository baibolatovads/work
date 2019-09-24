#include <bits/stdc++.h>
using namespace std;

int main (){

int n;
cin >> n;
int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

int x;
cin >> x;
int k = 0;

	for (int i = 0; i < n; i++){
		if (a[i] == x) k =1;
	}if (k==1) cout << "YES";
	else cout << "NO";

	return 0;
}