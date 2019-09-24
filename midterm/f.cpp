#include <bits/stdc++.h>
using namespace std;
int main(){

int n, k, x;

cin >> n >> k;

	for(int i = 1; i<=n; i++){
		cin >>x;
		if (i==k) continue;
		cout << x << " ";
	}

return 0;
}