#include <bits/stdc++.h>
using namespace std;

int main(){

	int a, b, h, m;
	char c;

	cin >> a >> c >> b >> h >> m;

	b += m;
	if(b >= 60){
		a += b/60;
		b = b%60;
	}

	a += h;
	if(a == 24) a = 0;
	else if(a > 24){
		a = a%24;
	}

	if(a < 10) {
		cout << 0 << a;
	}
	else cout << a;

	cout << c;

	if(b < 10) cout << 0 << b;
	else cout << b;

return 0;
}
