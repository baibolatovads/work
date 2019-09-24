#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, a, b, c, d;
	cin >> n;

	a = n/1000;
	b = n%1000;

	c = a/100 + (a/10)%10 + a%10;
	d = b/100 + (b/10)%10 + b%10;

	if(c == d) cout << "YES";
	else cout << "NO";

return 0;
}
