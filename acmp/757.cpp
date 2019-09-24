#include <bits/stdc++.h>
using namespace std;
int main(){

	long long c, h, o;
	int a, b, c1;

	cin >> c >> h >> o;

	if(c >= 2 && h >= 6 && o >= 1) {
		a = c/2;
		b = h/6;
		c1 = o;
		int min = a;
		if(a > b) min = b;
		if(min > c1) min = c1;
		cout << min;
	}
	else cout << 0;

return 0;
}