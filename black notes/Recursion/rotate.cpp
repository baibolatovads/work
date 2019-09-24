#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main (){

	int n, m;
	cin >> n >> m;
	int a;
	int b[n];

	for(int i = 0; i < n; i++){
		cin >> a;
		b[i] = a;
	}

	rotate(b, b + m, b + 1);
	reverse(b, b + n);

	for(int i = 1; i <= n; i++){
		cout << b[i] << " ";
	}

return 0;
}