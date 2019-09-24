#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;
int a[n];
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

int imin = 0;

sort(a, a + n);

cout << a[0] << " " << a[1];

return 0;
}