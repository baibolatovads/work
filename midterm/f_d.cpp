#include <bits/stdc++.h>
using namespace std;
int main(){

int n, k;
cin >> n >> k;
int a;

	for (int i = 1; i <= n; i++){
		cin >> a;
		if (i == k) continue;
		cout << a << " ";
	}

return 0;
}