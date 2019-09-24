#include <bits/stdc++.h>
using namespace std;

int main(){

	int A;
	cin >> A;

	int f1 = 0, f2 = 1, n = 1, i = 1;
	while(n < A){
		n = f1 + f2;
		f1 = f2;
		f2 = n;
		i++;
	}
	if (A == n){
		cout << i;
	}
	else cout << "-1";

return 0;
}