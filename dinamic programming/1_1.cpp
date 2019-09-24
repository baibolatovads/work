#include <bits/stdc++.h>
using namespace std;

int f(int n){
	if(n < 2) return 1;
	int a[n];
	a[0] = a[1] = 1;

	for(int i = 2; i < n; i++){
		if(i % 2 == 0){
			a[i] = a[i/2] + a[i/2 - 1];
		}else{
			a[i] = a[(i - 1)/2] + a[(i - 1)/2 - 1];
		}
	}
	return a[n-1];
}
int main(){

	int n;
	cin >> n;
	cout << f(n);

return 0;
}
